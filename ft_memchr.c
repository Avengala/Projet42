/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:59:11 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 13:17:14 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)s;
	while (n != 0)
	{
		if (str[index] == (unsigned char)c)
		{
			return (str + index);
		}
		index++;
		n--;
	}
	return (NULL);
}
