/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:35:30 by vde-mene          #+#    #+#             */
/*   Updated: 2015/11/27 12:38:54 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

void	*ft_strdup(const char *s1)
{
	char	*str;
	int		size;
	int		index;

	index = 0;
	size = (strlen(s1) + 1);
	if (!s1)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (size));
	if (!str)
	{
		return (NULL);
	}
	while (index <= size)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	free(str);
	return (str);
}
