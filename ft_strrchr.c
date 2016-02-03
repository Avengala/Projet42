/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:45:05 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/03 18:37:59 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = (ft_strlen(s));
	while (s[index] != c && index >= 0)
	{
		index--;
	}
	if (s[index] == c || c == '\0')
		return (char *)(&s[index]);
	return (NULL);
}
