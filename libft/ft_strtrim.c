/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:31:56 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/07 22:00:19 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	size_t	len;
	size_t	front;
	size_t	end;
	size_t	res_size;

	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	front = 0;
	while (ft_strchr(set, s1[front]) != NULL)
		front++;
	end = 0;
	while (len - end > front && ft_strchr(set, s1[len - end - 1]) != NULL)
		end++;
	if (len <= front + end)
		return (ft_strdup(""));
	res_size = len - front - end;
	result = (char *)malloc(res_size + 1);
	if (!result)
		return (NULL);
	ft_memmove(result, (s1 + front), res_size);
	result[res_size] = '\0';
	return (result);
}
/*
int	main(void)
{
	const char	*str = "Bienvenu a l'ecole 42!";
	const char	*set1 = "Bi42!";
	const char	*set2 = "";
	char		*dst1;
	char		*dst2;

	dst1 = ft_strtrim(str, set1);
	dst2 = ft_strtrim(str, set2);
	printf("%s\n", dst1);
	printf("%s\n", dst2);
	free(dst1);
	free(dst2);
	return (0);
}
*/
