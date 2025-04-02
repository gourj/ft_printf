/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:12:19 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/16 20:36:44 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*new_node;
	void	*success;

	first_node = NULL;
	while (lst != NULL)
	{
		success = f(lst->content);
		if (!success)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		new_node = ft_lstnew(success);
		if (!new_node)
		{
			ft_lstclear(&first_node, del);
			free(success);
			return (NULL);
		}
		ft_lstadd_back(&first_node, new_node);
		lst = lst->next;
	}
	return (first_node);
}
