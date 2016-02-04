/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:34:03 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/04 18:38:03 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	str = ft_strnew(ft_strlen(s));
	if (s != NULL && f != NULL && str != NULL)
	{
		index = 0;
		while (s[index] != '\0')
		{
			str[index] = f(index, s[index]);
			index++;
		}
	}
	return (str);
}
