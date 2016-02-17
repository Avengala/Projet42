/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:10:44 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:20:19 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*string;
	size_t			index;

	index = 0;
	str = (unsigned char *)s1;
	string = (unsigned char *)s2;
	while (n != 0)
	{
		if (str[index] != string[index])
		{
			return (str[index] - string[index]);
		}
		index++;
		n--;
	}
	return (0);
}
