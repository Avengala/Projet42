/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:36:07 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/13 18:33:38 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list != NULL)
	{
		if (content == NULL)
		{
			liste->content = NULL;
			liste->content_size = 0;
		}
		else
		{
			list->content = malloc(content_size);
			if (list->content != NULL)
			{
				ft_memcpy(list->content, content, content_size);
				list->content_size = content_size;
				list->next = NULL;
				return (list);
			}
		}
	}
	return (NULL);
}
