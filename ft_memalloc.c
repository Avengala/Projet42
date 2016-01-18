/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:41:02 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/18 18:41:51 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*str;

	str = malloc(size);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, size);
	return (mem);
}
