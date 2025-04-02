/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:21:06 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/10 20:31:36 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_rev_char_tab(char *str)
{
	size_t	size;
	size_t	left;
	size_t	right;
	char	temp;

	size = ft_strlen(str);
	left = 2;
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

int	ft_print_ptr(char **specifier, va_list args)
{
	size_t		i;
	uintptr_t	nbr;
	const char	base[] = "0123456789abcdef";		
	char		result[19];

	result[0] = '0';
	result[1] = 'x';
	nbr = (uintptr_t)va_arg(args, void *);
	i = 2;
	if (nbr == 0)
	{
		result[i] = base[(nbr % 16)];
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
	(*specifier)++;
	return (write(1, result, i));
}
