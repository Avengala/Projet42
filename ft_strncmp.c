/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:39:30 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/03 18:54:30 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	n2;

	n2 = 0;
	index = 0;
	if (n > 0)
	{
		n2 = n - 1;
	}
	while (n2 != 0 && s1[index] == s2[index])
	{
		index++;
		n2--;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
