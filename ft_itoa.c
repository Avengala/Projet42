/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:20:56 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/17 18:48:54 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenint(int cp)
{
	int		nblen;

	if (cp == 0)
		return (1);
	nblen = 0;
	while (cp != 0)
	{
		nblen++;
		cp = cp / 10;
	}
	return (nblen);
}

char		*ft_itoa(int n)
{
	int		nblen;
	int		sign;
	char	*res;

	sign = ft_ispositif(n);
	nblen = ft_lenint(n);
	res = NULL;
	res = (char *)malloc(sizeof(char) * (nblen + sign + 1));
	if (res)
	{
		res = res + nblen + sign;
		*res = '\0';
		if (!n)
			*--res = '0';
		while (n != 0)
		{
			*--res = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--res = '-';
	}
	return (res);
}
