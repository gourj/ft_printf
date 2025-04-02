/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:53:56 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/05 23:19:07 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	unsigned char	chr;
	char			*result;
	size_t			indx;

	indx = 0;
	result = 0;
	chr = (unsigned char)ch;
	while (str[indx] != '\0')
	{
		if (str[indx] == chr)
			result = (char *)&str[indx];
		indx++;
	}
	if (str[indx] == '\0' && chr == '\0')
		result = (char *)&str[indx];
	return (result);
}
/*
int	main(void)
{
	const char	str[50] = "Bienvenu a l'ecole 42!";

	printf("ft_strrchr(): %s\n", ft_strrchr(str, 'n'));
	printf("strrchr(): %s\n", strrchr(str, 'n'));
	return (0);
}
*/
