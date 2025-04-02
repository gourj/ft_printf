/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:57:34 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 15:16:52 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

void	ft_func2(unsigned int n, char *ch)
{
	if (n % 2 == 0)
	{
		if (ft_isalpha(*ch))
			*ch = ft_toupper(*ch);
	}
}
*/
void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	indx;

	indx = 0;
	while (str[indx] != 0)
	{
		f(indx, &(str[indx]));
		indx++;
	}
}
/*
int	main(void)
{
	char	str[24] = "Bienvenue a l'ecole 42!";

	printf("before ft_finc2(): %s\n", str);
	ft_striteri(str, ft_func2);
	printf("after  ft_func2(): %s\n", str);
	return (0);
}
*/	
