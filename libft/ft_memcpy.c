/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:46:00 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/05 22:12:43 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	size_t	indx;
	char	*ptr_dst;
	char	*ptr_src;

	if (dst == NULL && src == NULL)
		return (dst);
	indx = 0;
	ptr_dst = dst;
	ptr_src = (char *)src;
	while (indx < count)
	{
		*ptr_dst = *ptr_src;
		indx++;
		ptr_dst++;
		ptr_src++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[50] = "Bienvenu a l'ecole 42!";
	int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	str2[50] = "C'est dificile.";
	int		arr2[3] = {11, 12, 13};
	int		i;

	printf("before ft_memcpy() - %s\n", str);
	printf("before ft_memcpy() - ");
	i = 0;
	while (i < 10)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(str, str2, 6 * sizeof(char));
	ft_memcpy(arr, arr2, 3 * sizeof(int));
	//memcpy(str, str2, 6 * sizeof(char));
	//memcpy(arr, arr2, 3 * sizeof(int));
	printf("after ft_memcpy() - %s\n", str);
	printf("after ft_memcpy() - ");
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
