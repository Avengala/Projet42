#include <unistd.h>

void	ft_putstr(char const *s)
{
	int	i;
	char	letter;

	i = 0;
	while (s[i] != '\0')
	{
		letter = s[i];
		write(fd, &letter, 1);
		i++;
	}
	write(fd, "\n", 1);
}

int	 main(void)
{
	ft_putstr("bonjour vincent");
	return (0);
}
