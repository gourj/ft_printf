/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:58:45 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/05/15 22:01:34 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	const int	n = 2147483647;

	ft_printf("printf(): ");
	printf("");
	ft_printf("\nft_printf()");
	ft_printf("");
	ft_printf("\n");
	ft_printf("printf(): ");
	printf("%c, %s, %p, %d, %i, \n%u, %x, %X, %%\n\n",
		'a', "bcd", &n, n, n, -n, n, n);
	ft_printf("ft_printf(): ");
	ft_printf("%c, %s, %p, %d, %i, \n%u, %x, %X, %%\n",
		'a', "bcd", &n, n, n, -n, n, n);
	return (0);
}
