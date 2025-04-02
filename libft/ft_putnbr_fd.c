/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:51:28 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 16:58:45 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include "libft.h"

void	ft_rev_char_tab(char *str)
{
	int		left;
	int		right;
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

void	ft_putstr_for_putnbr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int		i;
	char	int_to_char[11];

	i = 0;
	if (nb < 0)
		write(fd, "-", 1);
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (nb != 0 && i < 11)
	{
		if (nb < 0)
			int_to_char[i] = '0' + (nb % 10) * (-1);
		else
			int_to_char[i] = '0' + nb % 10;
		i++;
		nb = nb / 10;
	}
	int_to_char[i] = '\0';
	ft_rev_char_tab(int_to_char);
	ft_putstr_for_putnbr(int_to_char, fd);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	return (0);
}
*/
