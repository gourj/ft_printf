/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:21:25 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/10 20:11:12 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* pup - print until percent;
 * Some sort of ft_putstr(), but until the '%' character;
 * Receives the address of the string and iterates on the pointer
 * that have been passed; On return iterator points to '%' or '\0';
 * Returns the number of printed characters or -1 on error;
 */
static int	ft_pup(char **str)
{
	int	status;
	int	counter;

	counter = 0;
	if (*str)
	{
		while (**str != '%' && **str != '\0')
		{
			status = write(1, *str, 1);
			if (status == -1)
				return (-1);
			counter += status;
			(*str)++;
		}
	}
	return (counter);
}

/* Check the symbol after '%' and if its a specifier,
 * calls the print function in accordance to the specifier;
 * Receives the pointer to specifier and list of arguments;
 * Returns the number of symbols printed or -1 on error;
 */
static int	ft_specifier_check(char **specifier, va_list args)
{
	(*specifier)++;
	if (**specifier == 'c')
		return (ft_print_char(specifier, args));
	else if (**specifier == 's')
		return (ft_print_str(specifier, args));
	else if (**specifier == 'p')
		return (ft_print_ptr(specifier, args));
	else if (**specifier == 'd' || **specifier == 'i')
		return (ft_print_int(specifier, args));
	else if (**specifier == 'u')
		return (ft_print_unsigned(specifier, args));
	else if (**specifier == 'x' || **specifier == 'X')
		return (ft_print_hex(specifier, args));
	else if (**specifier == '%')
		return (ft_print_percent(specifier));
	else
		return (write(1, "%", 1));
}

/* Iterates on the given string, prints it until '%' symbol,
 * then checks for the specifier;
 * Receives list of argeuments and source string;
 * Return the number of printed out symbols;
 */
static int	ft_printf_internal(va_list args, char *str)
{
	int		counter;
	int		status;

	counter = 0;
	while (*str != '\0')
	{
		status = ft_pup(&str);
		if (status == -1)
			return (-1);
		counter += status;
		if (str && *str == '%')
		{
			status = ft_specifier_check(&str, args);
			if (status == -1)
				return (-1);
			counter += status;
		}
	}
	return (counter);
}

/* Prints out given string, printing instead of specifiers the
 * given arguments values;
 * Recieves the source string and arguments;
 * Returns the number of printed out symbols;
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*specifier;
	char	*percent;
	int		counter;

	va_start(args, str);
	specifier = (char *)str;
	percent = ft_strchr(str, '%');
	if (!percent && str)
		return (write(1, str, ft_strlen(str)));
	counter = ft_printf_internal(args, specifier);
	va_end(args);
	return (counter);
}
