#include <stdlib.h>
#include <stdio.h>

int			ft_atoi(char *str)
{
	size_t		neg;
	size_t		index;
	size_t		result;

	result = 0;
	if (str[index] == '-')
	{
		neg = 1;
		index = 0 + 1;
	}
	while (str[index] != '\0' && str[index] >= '0'
		&& str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	 if (neg == 1)
		return (-result);
	else if (result > 0)
		return (result);

}

int	 main(void)
{
   int x;
    int y;
    y = atoi("q289i2");
    x = ft_atoi("q289i2");
    printf( "x = %d\n", x );
    printf( "y = %d\n", y );
    return EXIT_SUCCESS;
}
