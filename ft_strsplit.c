/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 18:36:13 by vde-mene          #+#    #+#             */
/*   Updated: 2016/01/24 18:52:33 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strsubb(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * len + 1);
	while (start < len)
	{
		*str = s[start];
		start++;
		str = str + 1;
	}
	*str = '\0';
	return (str - len);
}

static int	ft_count_word(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i] != '\0' || s[i - 1] != c)
			j++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	l = ft_count_word(s, c) - 1;
	printf("test l : %d\n", l);
	str = (char **)malloc(sizeof(char *) * l + 1);
	while (i < l)
	{
		j = 0;
		while (*s != '\0' && *s == c)
			s++;
		while (*s != '\0' && *s != c)
			j++;
		*(str++) = ft_strsubb(s, 0, j);
		s = s + j;
		i++;
	}
	*str = NULL;
	return (str - l);
}
