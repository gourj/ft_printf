/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:30:06 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 19:04:31 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i] == to_find[j] && to_find[j] != '\0' && j <= count)
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0' && i <= count && src[i - 1] == to_find[j - 1])
			return ((char *)(&src[i - j]));
		i = (i - j) + 1;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[50] = "Bienvenu a l'ecole 42!";
	const char	to_find[15] = "42!";

	printf("ft_strnstr(): %s\n", ft_strnstr(str, to_find, 10));
	printf("ft_strnstr(): %s\n", ft_strnstr(str, to_find, 23));
	printf("strnstr(): %s\n", strnstr(str, to_find, 10));
	printf("strnstr(): %s\n", strnstr(str, to_find, 23));
	return (0);
}
*/
