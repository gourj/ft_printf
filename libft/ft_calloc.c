/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:12:25 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/17 21:17:41 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_calloc(size_t n_elem, size_t el_size)
{
	char	*result;
	size_t	indx;

	result = malloc(n_elem * el_size);
	if (!result)
		return (NULL);
	indx = 0;
	while (indx < n_elem * el_size)
	{
		result[indx] = 0;
		indx++;
	}
	return ((void *)result);
}
/*
int	main(void)
{
	int		*ptr = ft_calloc(10, sizeof(int));
	int		*ptr2 = ft_calloc(10, 0);
	size_t	indx;

	indx = 0;
	while (indx < 10)
	{
		printf("%i\n", ptr[indx]);
		indx++;
	}
	free(ptr);
	free(ptr2);
	return (0);
}
*/
