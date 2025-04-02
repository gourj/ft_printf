/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:36:02 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/08 17:22:13 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Prints the char from args list, moves specifier to next symbol
 * of the source string;
 * Receives pointer to string and arguments list;
 * Returns number of printed symbol or -1 on error;
 */
int	ft_print_char(char **specifier, va_list args)
{
	char	ch;

	ch = (char)va_arg(args, int);
	(*specifier)++;
	return (write(1, &ch, 1));
}
