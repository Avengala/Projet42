#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		if ((s1[i] - s2[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
