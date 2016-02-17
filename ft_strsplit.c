/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 18:50:55 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/17 17:48:08 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
			i++;
		if (str[i] != '\0' || str[i - 1] != c)
			j++;
	}
	return (j);
}

static char		**write_words(char **str, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				str[j][k] = s[i];
				k++;
				i++;
			}
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int			len;
	char		**str;

	if (s == NULL || c == 0)
		return (NULL);
	len = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_alloc_words(str, s, c);
	write_words(str, s, c);
	return (str);
}
