/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:35:56 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/01/28 19:54:14 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	*ft_memset(void *dst, int val, size_t count)
{
	size_t			indx;
	char			*ptr;
	unsigned char	ch;

	indx = 0;
	ptr = dst;
	ch = (unsigned char)val;
	while (indx < count)
	{
		*ptr = ch;
		indx++;
		ptr++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[50] = "Bienvenu a l'ecole 42!";
	int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	size_t	i;

	i = 0;
	printf("before ft_memset() - %s\n", str);
	printf("before ft_memset() - ");
	while (i < 10)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");

	ft_memset(str+8, '.', 9);
	ft_memset(arr+2, 11, 1);
	//memset(str+8, '.', 9);
	//memset(arr+2, 11, 1);

	printf("after ft_memset() - %s\n", str);
	printf("after ft_memset() - ");
	i = 0;
	while (i < 10)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
