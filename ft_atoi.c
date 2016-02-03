/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:31:04 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/03 19:05:26 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		neg;
	int		index;
	int		result;

	result = 0;
	index = 0;
	while (str[index] == 32 || str[index] == '\v' || str[index] == '\t' ||
	str[index] == '\f' || str[index] == '\r' || str[index] == '\n')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] != '+')
			neg = 1;
		index++;
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
