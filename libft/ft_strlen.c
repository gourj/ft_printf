/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:39:40 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/14 19:37:08 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	indx;

	indx = 0;
	while (str[indx] != '\0')
		indx++;
	return (indx);
}
/*
int	main(void)
{
	const char	str[50] = "Bienvenu a l'ecole 42!";

	printf("ft_strlen(): %lu\n", ft_strlen(str));
	printf("strlen(): %lu\n", strlen(str));
	return (0);
}
*/
