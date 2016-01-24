/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:35:31 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/24 18:35:39 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 != NULL || s2 != NULL)
	{
		while (s1[i] == s2[i] != '\0' && s2[i] != '\0' && n != 0)
		{
			n--;
			i++;
		}
		if ((s1[i] - s2[i] == 0))
		{
			return (1);
		}
	}
	return (0);
}
