/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:34:03 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/17 17:01:37 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	str = NULL;
	if (s != NULL && f != NULL)
	{
		index = 0;
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		while (s[index] != '\0')
		{
			str[index] = f(index, s[index]);
			index++;
		}
	}
	return (str);
}
