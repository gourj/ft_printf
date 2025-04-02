/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:39:42 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/14 19:33:49 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	indx;

	indx = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[indx] != '\0' && indx < size - 1)
	{
		dst[indx] = src[indx];
		indx++;
	}
	dst[indx] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	const char	src[50] = "Bienvenu a l'ecole 42!";
	char		dst1[50] = "";
	char		dst2[50] = "";

	printf("to copy: %lu, ft_strlcpy(): %s\n", ft_strlcpy(dst1, src, 25), dst1);
	printf("to copy: %lu, strlcpy(): %s\n", strlcpy(dst2, src, 25), dst2);
	return (0);
}
*/
