#include "libft.h"

char	*ft_strmap(char const *s), char (*f)(char))
{
	char	*str;
	size_t	index;

	index = 0;
	if (str != NULL && f != NULL)
	{
		str= (char *)malloc(sizeof(*str) * ft_strlen(s));
		if (sr == NULL)
		{
			return (NULL);
		}
		while (s[index] != '\0')
		{
			str[index] = f(s[index]);
			index++;
		}
		return (str);
	}
	return (0);
}
