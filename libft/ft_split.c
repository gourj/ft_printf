/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:11:49 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/19 19:45:51 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

static size_t	ft_wc(const char *str, char ch)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ch && (str[i + 1] == '\0' || str[i + 1] == ch))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, size_t count)
{
	char	*result;

	if (!str)
		return (NULL);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, str, count + 1);
	return (result);
}

static void	ft_memfree(char **result, size_t w_num)
{
	while (w_num != 0)
	{
		free(result[w_num - 1]);
		w_num--;
	}
	free(result);
}

static char	**ft_w_write(char **result, const char *str, char ch, size_t *w_num)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ch)
			i++;
		j = i;
		while (str[i] != ch && str[i] != '\0')
			i++;
		if (i > j)
		{
			result[*w_num] = ft_strndup(&(str[j]), i - j);
			if (!result[*w_num])
			{
				ft_memfree(result, *w_num);
				return (NULL);
			}
			(*w_num)++;
		}
	}
	result[*w_num] = NULL;
	return (result);
}

char	**ft_split(const char *str, char ch)
{
	char	**result;
	size_t	w_num;

	w_num = 0;
	result = (char **)malloc(((ft_wc(str, ch) + 1) * sizeof(char *)));
	if (!result)
		return (NULL);
	result = ft_w_write(result, str, ch, &w_num);
	return (result);
}
/*
int	main(void)
{
	char	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. 
//	Sed non risus. Suspendisse";
//	char	*str2 = "";
	char	**dst;
	size_t	i;

	dst = ft_split(str, ' ');
	printf("%s\n", *dst);
	printf("%s\n", dst[1]);
	printf("%s\n", dst[2]);
	printf("%s\n", dst[3]);
	printf("%s\n", dst[4]);
	printf("%s\n", dst[5]);
	printf("%s\n", dst[6]);
	printf("%s\n", dst[7]);
	printf("%s\n", dst[8]);
	printf("%s\n", dst[9]);
	printf("%s\n", dst[10]);
	printf("%s\n", dst[11]);
	printf("%s\n", dst[12]);
	i = 0;
	while (i < 13)
	{
		free(dst[i]);
		i++;
	}
	free(dst);
	return (0);
}
*/
