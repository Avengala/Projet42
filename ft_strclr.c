#include "libft.h"

void	ft_strclr(char *s)
{
	int	index;

	index = 0;
	if (s != NULL)
	{
		while (s[index] != '\0')
		{
			s[index] = '\0';
			index++;
		}
	}
}
