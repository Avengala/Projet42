#include "libft.h"

char	*ft_strmapi.c(char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	index;

	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(sizeof(*str) * ft_strlen(s));
		if (str == NULL)
		{
			reutnr (NULL);
		}
		index = 0;
		while (s[index] != '\0')
		{
			str[index] = f(i, s[index]);
			index++;
		}
		return (str);
	}
	return (0);	
}
