/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:12:08 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:28:55 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	i;
	size_t	len;

	i = 0;
	index = ft_strlen(dst);
	len = ft_strlen(src);
	if (size <= index)
		return (len + size);
	while (src[i] && index + i + 1 < size)
	{
		dst[index + i] = src[i];
		i++;
	}
	dst[index + i] = '\0';
	return (index + ft_strlen(src));
}
