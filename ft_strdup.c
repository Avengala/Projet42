#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_strdup(const char *s1)
{
	char	*str;
	int	size;
	int	index;

	index = 0;
	size = (strlen(s1) + 1);
	if (!s1)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (size));
	if (!str)
	{
		return (NULL);
	}
	while (index <= size)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
    	free (str);
	return (str);
}

int main( void )
{
    char *dup;

    dup = ft_strdup( "Bonjour" );
    printf( "%s\n", dup );

    return EXIT_SUCCESS;
}
