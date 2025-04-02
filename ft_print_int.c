/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:39:22 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/10 20:12:56 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(char **specifier, va_list args)
{
	int		nbr;
	int		counter;
	char	*str;

	nbr = va_arg(args, int);
	str = ft_itoa(nbr);
	counter = write(1, str, ft_strlen(str));
	(*specifier)++;
	free(str);
	return (counter);
}
