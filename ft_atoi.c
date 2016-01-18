/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:31:04 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/13 16:36:49 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	size_t		neg;
	size_t		index;
	size_t		result;

	result = 0;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] != '+')
			neg = 1;
		index = 0 + 1;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (neg == 1)
		return (-result);
	return (result);
}
