/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:52:14 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/10 18:50:23 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_char(char **specifier, va_list args);
int		ft_print_str(char **specifier, va_list args);
int		ft_print_ptr(char **specifier, va_list args);
int		ft_print_int(char **specifier, va_list args);
int		ft_print_unsigned(char **specifier, va_list args);
int		ft_print_hex(char **specifier, va_list args);
int		ft_print_percent(char **specifier);
char	*ft_itoa_unsigned(unsigned int n);

#endif
