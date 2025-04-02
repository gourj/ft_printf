/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:32:12 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/19 20:21:39 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_str_up(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

static void	ft_rev_char_tab(char *str)
{
	int		size;
	int		left;
	int		right;
	char	temp;

	size = 0;
	while (str[size] != '\0')
		size++;
	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = str[right];
		str[right] = str[left];
		str[left] = temp;
		right--;
		left++;
	}
}

int	ft_print_hex(char **specifier, va_list args)
{
	const char		base[17] = "0123456789abcdef";
	size_t			i;
	char			result[17];
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	i = 0;
	if (nbr == 0)
	{
		result[i] = base[0];
		i++;
	}
	while (nbr != 0)
	{
		result[i] = base[(nbr % 16)];
		nbr /= 16;
		i++;
	}
	result[i] = '\0';
	ft_rev_char_tab(result);
	if ((*(*specifier)) == 'X')
		ft_str_up(result);
	(*specifier)++;
	return (write(1, result, i));
}
