/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:45:05 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 13:45:07 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)s;
	index = (strlen((char *)s) - 1);
	while (index != -1)
	{
		if (str[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index--;
	}
	return (NULL);
}
