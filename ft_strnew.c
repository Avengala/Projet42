#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t index;

	index = 0;
	str = (char *)malloc(sizeof(*s) * size);
	if (str == NULL)
	{
		str[index] = '\0';
		index++;
	}
	retrun (str);
}
