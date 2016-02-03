/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:31:37 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/03 18:33:15 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != c && s[index] != '\0')
	{
		index++;
	}
	if (s[index] == c || c == '\0')
		return (char *)(&s[index]);
	return (NULL);
}
