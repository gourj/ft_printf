/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:46 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/06 00:18:31 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	size;
	size_t	s1_length;
	size_t	s2_length;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	size = s1_length + s2_length;
	result = (char *)malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memmove(result, s1, s1_length);
	ft_memmove(result + s1_length, s2, s2_length);
	result[size] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*str1 = "O mon Dieu!";
	char	*str2 = "Je suis tres fatiguee!";

	printf("%s\n", ft_strjoin(str1, str2));
	printf("%s\n", ft_strjoin("", str2));
	return (0);
}
*/
