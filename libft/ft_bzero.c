/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:01:28 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/01/28 19:59:15 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	ft_bzero(void *dst, size_t count)
{
	size_t	indx;
	char	*ptr;

	ptr = dst;
	indx = 0;
	while (indx < count)
	{
		*ptr = '\0';
		indx++;
		ptr++;
	}
}
/*
int	main(void)
{
	int		i;
	char	str[50] = "Bienvenu a l'ecole 42!";
	int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("before ft_bzero() - %s\n", str);
	printf("before ft_bzero() - ");
	i = 0;
	while (i < 10)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str, 13);
	ft_bzero(arr, 8);
	//bzero(str, 13);
	//bzero(arr, 8);
	printf("after ft_bzero() - %s\n", str+13);
	printf("after ft_bzero() - ");
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
