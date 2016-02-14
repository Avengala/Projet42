/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:47:03 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:32:05 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	index;
	size_t	i;
	size_t	j;

	index = 0;
	if (little[index] == '\0')
	{
		return ((char *)(big));
	}
	while (big[index] != '\0')
	{
		i = index;
		j = 0;
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char*)(&big[index]));
		}
		index++;
	}
	return (NULL);
}
