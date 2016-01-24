/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:22:28 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/24 19:02:44 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;

	if (dst && src)
	{
		str = (unsigned char*)malloc(sizeof(*str) * n);
		ft_memcpy(str, src, n);
		ft_memcpy(dst, str, n);
		return (dst);
	}
	return (dst);
}
