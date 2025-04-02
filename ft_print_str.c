/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:03:30 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/10 20:44:06 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char **specifier, va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
	{
		(*specifier)++;
		return (write(1, "(null)", 6));
	}
	(*specifier)++;
	return (write(1, str, ft_strlen(str)));
}
