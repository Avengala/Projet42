/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 17:38:59 by vde-mene          #+#    #+#             */
/*   Updated: 2016/02/17 17:49:15 by vde-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_write_words(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

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
	return (str);
}
