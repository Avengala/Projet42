/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:54:58 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/26 19:01:06 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		j;

	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s != NULL && str != NULL)
	{
		str = ft_strcpy(str, s);
		while (str[j] == '\n' || str[j] == '\t' || str[j] == ' ')
			j++;
		str = ft_strchr(str, str[j]);
		j = ft_strlen(str);
		while (j != 0)
		{
			if (str[j] == '\n' || str[j] == ' ' || str[j] == '\t')
				str[j] = '\0';
			if (str[j] >= 'a' && str[j] <= 'z')
				j = 1;
			else if (str[j] >= 'A' && str[j] <= 'Z')
				j = 1;
			j--;
		}
		return (str);
	}
	return (NULL);
}
