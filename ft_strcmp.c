/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:44:56 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 16:15:30 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	char	*size_s1;
	char	*size_s2;
	size_t	index;

	index = 0;
	size_s1 = (char *)s1;
	size_s2 = (char *)s2;
	while (size_s1[index] != '\0' && size_s2[index] != '\0')
	{
		if (size_s1[index] != size_s2[index])
		{
			return (size_s1[index] - size_s2[index]);
		}
		index++;
	}
	if (size_s1[index] == '\0' || size_s2[index] == '\0')
	{
		return (size_s1[index] - size_s2[index]);
	}
	return (0);
}
