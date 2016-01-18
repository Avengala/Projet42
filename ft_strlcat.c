/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:12:08 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 13:37:21 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	i;

	i = 0;
	index = 0;
	index = strlen(dst);
	size = size - index - 1;
	while (size != 0)
	{
		dst[index] = src[i];
		index++;
		i++;
		size--;
	}
	dst[index] = '\0';
	return (dst);
}
