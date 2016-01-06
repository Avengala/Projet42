#inlcude <stdlib.h>
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = malloc(size);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, size);
	return (mem);
}

int	main(void)
{
	char	*str;
	int	i;

	i = 0;
	*str = ft_memalloc(10);
	if (*str != '\0')
	{
		printf("sa passe");
	}	
	return (0);
}
