#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_calc(int n)
{
	int	nb;
	int	i;
	int	sign;

	sign = 0;
	i = 0;
	nb = n;
	if (n < 0)
	{
		nb = nb * -1;
		sign = 1;
	}
	while(nb >= 10)
	{
		nb = nb /10;
		i++;
	}
	return (i + sign  + 1);
}
char	*ft_conv(int len, int sign, int n, char *str)
{
        int	i;

	i = 0;
	str[len] = '\0';
        len--;
        while (len >= 0)
        {
                i = n % 10;
                str[len] = i + '0';
                if (n > 10)
                        n = n / 10;
                len--;
		if (len == 0 && sign == 1)
		{
			str[len] = '-';
			len--;
        	}
	}
	return (str);
}

int	ft_detect(int nb)
{
	if (nb < 0)
	{
		return (1);
	}
	return (0);
}
char	*ft_itoa(int n)
{
	int	len;
	int	sign;
	char	*str;

	sign = ft_detect(n);
	len = ft_calc(n);
	
	str = (char *)malloc(sizeof(char) * len + sign + 1);
	if (str != NULL)
	{
		if (sign == 1)
			n = n * -1;
		str = ft_conv(len, sign, n, str);
		return (str);
	}
	return (NULL);
}
int main(void)
{
	int nb;
	char *str;

	nb = -2147483647;
	str = ft_itoa(nb);
	printf("%s", str);
	return (0);
}
