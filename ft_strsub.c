#include <stdlib.h>

char	*ft_strsub(char	const *s, unsigned int	start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (s != NULL && str != NULL)
	{
		while (i < len && s[start] != '\0')
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
