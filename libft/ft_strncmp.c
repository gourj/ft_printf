/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:18:16 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/15 16:50:22 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	size_t	indx;

	if (count == 0)
		return (0);
	indx = 0;
	while ((s1[indx] != '\0' || s2[indx] != '\0') && indx < count)
	{
		if (s1[indx] != s2[indx])
			return ((unsigned char)s1[indx] - (unsigned char)s2[indx]);
		indx++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str1[50] = "test\200";//Bienvenu aul'ecole 42!";
	const char	str2[50] = "test\0";//Bienvenu a resto de commissaire Juve!";

	printf("ft_strncmp(): %i\n", ft_strncmp(str1, str2, 6));
//	printf("ft_strncmp(): %i\n", ft_strncmp(str1, str2, 11));
	printf("strncmp(): %i\n", strncmp(str1, str2, 6));
//	printf("strncmp(): %i\n", strncmp(str1, str2, 11));
	return (0);
}
*/
