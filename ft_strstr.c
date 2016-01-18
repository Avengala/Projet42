/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:47:03 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 13:55:13 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index;
	size_t	i;
	size_t	j;

	index = 0;
	if (s2[index] == '\0')
	{
		return ((char *)(s1));
	}
	while (s1[index] != '\0')
	{
		i = index;
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)(&s1[index]));
		}
		index++;
	}
	return (NULL);
}
