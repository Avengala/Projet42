/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:34:03 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/24 18:34:45 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	index;

	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(sizeof(*str) * ft_strlen(s));
		index = 0;
		while (s[index] != '\0')
		{
			str[index] = f(i, s[index]);
			index++;
		}
		return (str);
	}
	return (0);
}
