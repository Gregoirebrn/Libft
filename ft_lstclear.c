/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:37:25 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/14 14:27:58 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (lst == NULL)
		return ;
	while ((*lst) != NULL)
	{
		head = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = head;
	}
	*lst = NULL;
}
//		*lst = tmp;
/*
 * lst : nod1 nod2 nod3 nod4 nodn
 * 		 tmp2
 * */