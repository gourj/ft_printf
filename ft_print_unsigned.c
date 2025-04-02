/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:40:28 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/08 18:17:22 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(char **specifier, va_list args)
{
	unsigned int	nbr;
	int				counter;
	char			*str;

	nbr = va_arg(args, unsigned int);
	str = ft_itoa_unsigned(nbr);
	counter = write(1, str, ft_strlen(str));
	free(str);
	(*specifier)++;
	return (counter);
}
