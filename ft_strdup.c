/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:35:30 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:27:37 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = (ft_strlen(s1) + 1);
	str = (char *)malloc(sizeof(char) * (len));
	if (s1 != NULL && str != NULL)
	{
		str = ft_strcpy(str, s1);
		return (str);
	}
	return (NULL);
}
