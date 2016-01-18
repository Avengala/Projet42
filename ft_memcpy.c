/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:29:09 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/13 17:02:14 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*str;
	unsigned char	*string;

	index = 0;
	str = (unsigned char *)src;
	string = (unsigned char *)dst;
	while (n != 0)
	{
		string[index] = str[index];
		index++;
		n--;
	}
	return (dst);
}
