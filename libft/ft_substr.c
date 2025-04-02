/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:35:19 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/07 20:07:47 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	indx;
	size_t	size;

	size = 0;
	indx = ft_strlen(s);
	while (start < indx && s[start + size] != '\0' && size < len)
		size++;
	substr = (char *)malloc(size + 1);
	if (!substr)
		return (NULL);
	indx = 0;
	while (indx < size)
	{
		substr[indx] = s[start];
		indx++;
		start++;
	}
	substr[indx] = '\0';
	return (substr);
}
/*
int	main(void)
{
	const char	*str = "Bienvenu a l'ecole 42!";
	char		*dst;

	dst = ft_substr(str, 11, 12);
	printf("%s\n", str);
	printf("%s\n", dst);
	free(dst);
	dst = ft_substr(str, 11, 25);
	printf("%s\n", str);
	printf("%s\n", dst);
	free(dst);
	dst = ft_substr(str, 11, 0);
	printf("%s\n", str);
	printf("%s\n", dst);
	free(dst);
	dst = ft_substr(str, 0, 3);
	printf("%s\n", str);
	printf("%s\n", dst);
	free(dst);
	return (0);
}
*/
