/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:35:49 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/24 18:59:04 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	size_t	index;

	index = 0;
	str = (char *)malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		str[index] = '\0';
		index++;
	}
	return (str);
}
