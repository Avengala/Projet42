/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:41:39 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 11:45:43 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;
	unsigned char	*string;

	index = 0;
	str = (unsigned char *)src;
	string = (unsigned char *)dest;
	while (n != 0)
	{
		string[index] = str[index];
		if (string[index] == (unsigned char)c)
		{
			return (dest);
		}
		index++;
		n--;
	}
	return (0);
}
