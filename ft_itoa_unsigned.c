/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:25:05 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/03/09 18:27:13 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_count_dig(unsigned int n)
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

static void	ft_reverse(char *str)
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

static char	*ft_alloc_mem(unsigned int n)
{
	char	*result;
	size_t	size;

	size = ft_count_dig(n);
	result = (char *)malloc(size * sizeof(char) + 1);
	if (!result)
		return (NULL);
	return (result);
}

static size_t	ft_conversion(char *res, unsigned int n)
{
	size_t	size;
	size_t	indx;

	size = ft_count_dig(n);
	indx = 0;
	while (indx < size)
	{
		res[indx] = '0' + (n % 10);
		indx++;
		n /= 10;
	}
	return (indx);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*result;
	size_t	indx;

	result = ft_alloc_mem(n);
	if (!result)
		return (NULL);
	indx = ft_conversion(result, n);
	result[indx] = '\0';
	ft_reverse(result);
	return (result);
}
