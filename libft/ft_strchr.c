/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:36:15 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/05 23:11:55 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t			indx;
	unsigned char	chr;

	indx = 0;
	chr = (unsigned char)ch;
	while (str[indx] != '\0')
	{
		if (str[indx] == chr)
			return ((char *)&str[indx]);
		indx++;
	}
	if (str[indx] == '\0' && chr == '\0')
		return ((char *)&str[indx]);
	return (NULL);
}
/*
int	main(void)
{
	const char	str[50] = "Bienvenu a l'ecole 42!";

	printf("ft_strchr(): %s\n", ft_strchr(str, 'e'));
	printf("ft_strchr(): %s\n", strchr(str, 'e'));
	return (0);
}
*/
