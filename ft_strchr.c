/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:31:37 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 13:38:17 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)s;
	while (str[index] != '\0')
	{
		if (str[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index++;
	}
	return (NULL);
}
