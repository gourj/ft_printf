/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:35:38 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/05 23:25:05 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	*ft_memchr(const void *src, int ch, size_t count)
{
	const unsigned char	*ptr_src = (unsigned char *)src;
	unsigned char		chr;
	size_t				indx;

	if (sizeof(ptr_src) == 0)
		return (NULL);
	indx = 0;
	chr = (unsigned char)ch;
	while (indx < count)
	{
		if (ptr_src[indx] == chr)
			return ((void *)(&ptr_src[indx]));
		indx++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[50] = "";//"Bienvenu a l'ecole 42!";

	printf("ft_memchr(): %s\n", ft_memchr(str, 97, 15));
	printf("memchr(): %s\n", memchr(str, 97, 15));
	return (0);
}
*/
