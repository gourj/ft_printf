/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:20:14 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/14 20:31:22 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

size_t	ft_count_dig(int n)
{
	size_t	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

void	ft_reverse(char *str)
{
	size_t	left;
	size_t	right;
	char	temp;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left < right)
	{
		temp = str[right];
		str[right] = str[left];
		str[left] = temp;
		right--;
		left++;
	}
}

char	*ft_alloc_mem(int n)
{
	char	*result;
	size_t	size;

	size = ft_count_dig(n);
	if (n < 0)
		result = (char *)malloc(size * sizeof(char) + 2);
	else
		result = (char *)malloc(size * sizeof(char) + 1);
	if (!result)
		return (NULL);
	return (result);
}

size_t	ft_conversion(char *res, int n)
{
	size_t	size;
	size_t	indx;

	size = ft_count_dig(n);
	indx = 0;
	while (indx < size)
	{
		if (n < 0)
			res[indx] = '0' + (n % 10) * (-1);
		else
			res[indx] = '0' + (n % 10);
		indx++;
		n /= 10;
	}
	return (indx);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	indx;

	result = ft_alloc_mem(n);
	if (!result)
		return (NULL);
	indx = ft_conversion(result, n);
	if (n < 0)
	{
		result[indx] = '-';
		result[indx + 1] = '\0';
	}
	else
		result[indx] = '\0';
	ft_reverse(result);
	return (result);
}
/*
int	main(void)
{
	char	*str = ft_itoa(2147483647);
	printf("%s\n", str);
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	return (0);
}
*/
