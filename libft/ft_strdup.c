/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:24:28 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/03 20:40:37 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*result;

	size = ft_strlen(str) + 1;
	result = (char *)malloc(size * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, str, size);
	return (result);
}
/*
int	main(void)
{
	char		*ptr;
	const char	str[] = "Bienvenu a l'ecole 42!";

	ptr = ft_strdup(str);
	printf("src str - %s\n", str);
	printf("dup str - %s\n", ptr);
	free(ptr);
	return (0);
}
*/
