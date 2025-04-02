/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:55:35 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/01 16:17:25 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>
*/
#include "libft.h"

int	ft_isspace3(int ch)
{
	if (ch == '\t' || ch == '\n' || ch == '\v'
		|| ch == '\f' || ch == '\r' || ch == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		result;
	int		minus;
	size_t	indx;

	indx = 0;
	result = 0;
	minus = 1;
	while (str[indx] != '\0' && ft_isspace3(str[indx]))
		indx++;
	if (str[indx] != '\0' && (str[indx] == '+' || str[indx] == '-'))
	{
		if (str[indx] == '-')
			minus *= -1;
		indx++;
	}
	while (str[indx] != '\0' && (str[indx] >= '0' && str[indx] <= '9'))
	{
		result = result * 10 + (str[indx] - '0');
		indx++;
		if (str[indx] < '0' || str[indx] > '9')
			return (result * minus);
	}
	return (result * minus);
}
/*
int	main(void)
{
	const char	str1[50] = "-1234.42sdf324";
	const char	str2[50] = "	 2147483648dfd";
	const char	str3[50] = "-2147483648#$%";
	const char	str4[50] = "Bienvenu a l'ecole quarant deux!";

	printf("ft_atoi(): %i\n", ft_atoi(str1));
	printf("atoi(): %i\n", atoi(str1));
	printf("ft_atoi(): %i\n", ft_atoi(str2));
	printf("atoi(): %i\n", atoi(str2));
	printf("ft_atoi(): %i\n", ft_atoi(str3));
	printf("atoi(): %i\n", atoi(str3));
	printf("ft_atoi(): %i\n", ft_atoi(str4));
	printf("atoi(): %i\n", atoi(str4));
	return (0);
}
*/
