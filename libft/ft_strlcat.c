/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:44:06 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/05 21:35:50 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	indx;

	indx = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	while (src[indx] != '\0' && indx < size - dst_len - 1)
	{
		dst[dst_len + indx] = src[indx];
		indx++;
	}
	dst[dst_len + indx] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	*src1 = "aaa";
	char	dst1[20];// = "there is no stars in the sky";
	char	dst2[20];// = "there is no stars in the sky";

	printf("ft_strlen(): %lu\n", sizeof(dst1));
	printf("strlen(): %lu\n", sizeof(dst2));
	printf("before ft_strlcat(): %s\n", dst1);
	printf("total length tried- %lu\n", ft_strlcat(dst1, src1, 20));
	printf("after ft_strlcat(): %s\n\n", dst1);
	printf("before strlcat(): %s\n", dst2);
	printf("total length tried- %lu\n", strlcat(dst2, src1, 20));
	printf("after strlcat(): %s\n\n", dst2);
	return (0);
}
*/
