/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:03:30 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:21:45 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*string;

	index = 0;
	string = (unsigned char *)b;
	while (len != 0)
	{
		string[index] = (unsigned char)c;
		index++;
		len--;
	}
	return (b);
}
