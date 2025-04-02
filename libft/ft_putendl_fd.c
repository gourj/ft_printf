/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:33:15 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/09 16:34:13 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	size_t	indx;

	indx = 0;
	while (str[indx] != '\0')
	{
		write(fd, &str[indx], 1);
		indx++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*str = "Bienvenue a l'ecole 42!";

	ft_putendl_fd(str, 1);
	return (0);
}
*/
