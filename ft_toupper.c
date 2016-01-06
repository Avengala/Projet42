#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - ('a' - 'A');
	}
	return (c);
}

int	main(void)
{
	printf("%c", ft_toupper('a'));
	printf("%c", toupper('a'));
	return (0);
}
