/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:17:41 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 15:17:22 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

char	ft_func(unsigned int n, char ch)
{
	if (ft_isalpha(ch))
	{
		if (n % 2 == 0)
			ch = ft_toupper(ch);
	}
	return (ch);
}
*/
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	indx;

	result = ft_strdup(str);
	if (!result)
		return (NULL);
	indx = 0;
	while (str[indx] != '\0')
	{
		result[indx] = f(indx, str[indx]);
		indx++;
	}
	return (result);
}
/*
int	main(void)
{
	char	*str = "Bienvenue a l'ecole 42!";

	printf("processed str - %s\n", ft_strmapi(str, ft_func));
	return (0);
}
*/
