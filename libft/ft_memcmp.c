/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:19:12 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 18:47:32 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t count)
{
	const unsigned char	*ptr_s1 = (unsigned char *)s1;
	const unsigned char	*ptr_s2 = (unsigned char *)s2;
	size_t				indx;

	if (count == 0)
		return (0);
	indx = 0;
	while (indx < count)
	{
		if (ptr_s1[indx] != ptr_s2[indx])
			return (ptr_s1[indx] - ptr_s2[indx]);
		indx++;
	}
	return (ptr_s1[indx - 1] - ptr_s2[indx - 1]);
}
/*
int	main(void)
{
	const char	str1[50] = "Bienvenu a l'ecole 42!";
	const char	str2[50] = "Bienvenu a l'ecole 42! Commissaire Juve!";

	printf("ft_memcmp(): %i\n", ft_memcmp(str1, str2, 0));
	printf("ft_memcmp(): %i\n", ft_memcmp(str1, str2, 23));
	printf("memcmp(): %i\n", memcmp(str1, str2, 0));
	printf("memcmp(): %i\n", memcmp(str1, str2, 23));
	return (0);
}
*/
