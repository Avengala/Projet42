#include <unistd.h>

void	ft_putchar(char c)
{
	write(fd, &c, 1);
}
