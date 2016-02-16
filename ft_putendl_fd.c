/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:20:05 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/14 19:22:43 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	letter;

	i = 0;
	while (s[i] != '\0')
	{
		letter = s[i];
		write(fd, &letter, 1);
		i++;
	}
	write(fd, "\n", 1);
}
