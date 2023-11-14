/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:54 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/14 13:58:23 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*new_lst;
	void	*content;

	new = lst;
	while (lst != NULL)
	{
		ft_lstnew(f(lst->content));
		if (new->content == NULL)
		{
			ft_lstclear(new, del);
			ft_lstclear(new, del);
			return (NULL);
		}
		head = lst->next;
		ft_lstdelone(lst, del);
		lst = head;
	}
	return (new);
}
