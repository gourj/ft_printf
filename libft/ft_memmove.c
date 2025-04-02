/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:22:20 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/02 19:24:02 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	*ft_memcpybwd(void *dst, const void *src, size_t count)
{
	size_t	indx;
	char	*ptr_dst;
	char	*ptr_src;

	indx = 0;
	ptr_dst = dst + count - 1;
	ptr_src = (char *)src + count - 1;
	while (indx < count)
	{
		*ptr_dst = *ptr_src;
		indx++;
		ptr_dst--;
		ptr_src--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	const char		*ptr_src = (char *)src;
	char			*ptr_dst;

	ptr_dst = (char *)dst;
	if (ptr_dst == ptr_src)
		return (dst);
	if (ptr_dst < ptr_src)
		ft_memcpy(ptr_dst, ptr_src, count);
	else
		ft_memcpybwd(ptr_dst, ptr_src, count);
	return (dst);
}
/*
int	main(void)
{
	char		dst[50] = "Bienvenu a l'ecole 42!";//22 characters
	const char	src[16] = "Tu vas reussir!";//15 characters
	

	printf("before ft_memmove(): %s\n", dst);
	ft_memmove(dst, src, 15);
	//memmove(dst, src, 15);
	printf("after ft_memmove(): %s\n", dst);
	return (0);
}
*/
