/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:26:37 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 16:04:49 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <fcntl.h>
*/
#include "libft.h"

void	ft_putchar_fd(char ch, int fd)
{
	write(fd, &ch, 1);
}
/*
int	main(void)
{
	char	ch;
	char	ch2;
	int		fd;

	ch = 'c';
	fd = open("file", O_RDWR | O_CREAT);
	if (fd < 0)
		printf("Error\n");
	else
		ft_putchar_fd(ch, fd);
	close(fd);
	fd = open("file", O_RDONLY);
	read(fd, &ch2, 1);
	close(fd);
	ft_putchar_fd(ch2, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ch, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ch, 2);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ch, 3);
	return (0);
}
*/
