/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:02:56 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:29:32 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	size;

	size = 0;
	index = 0;
	index = ft_strlen(s1);
	while (n != 0)
	{
		s1[index] = s2[size];
		index++;
		size++;
		n--;
	}
	s1[index] = '\0';
	return (s1);
}
