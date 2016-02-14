/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:22:28 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:21:29 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;

	if (!len)
		return (dst);
	str = (unsigned char *)malloc(sizeof(*str) * len);
	if (str)
	{
		ft_memcpy(str, src, len);
		ft_memcpy(dst, str, len);
		free(str);
	}
	return (dst);
}
