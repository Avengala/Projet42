/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:39:30 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:29:50 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!n)
		return (0);
	while (index < n && (s1[index] && s2[index] && s1[index] == s2[index]))
	{
		index++;
	}
	if (index >= n)
		index--;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
