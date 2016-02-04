/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:31:03 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/04 18:29:25 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	index;

	index = 0;
	str = ft_strnew(ft_strlen(s));
	if (str != NULL && f != NULL && s != NULL)
	{
		while (s[index] != '\0')
		{
			str[index] = f(s[index]);
			index++;
		}
	}
	return (str);
}
