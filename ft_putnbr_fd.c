#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int	nb;

	nb = -21474836;
	ft_putnbr(nb);
	return (0);
}
