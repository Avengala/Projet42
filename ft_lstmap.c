/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 17:28:52 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/16 17:43:15 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*list;

	new_lst = NULL;
	if (lst && (f))
	{
		list = (f)(lst);
		new_lst = list;
		lst = lst->next;
		while (lst)
		{
			list->next = (f)(lst);
			list = list->next;
			lst = lst->next;
		}
	}
	return (new_lst);
}
