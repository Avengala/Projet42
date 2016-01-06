#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *s1, const char *s2)
{
	size_t	index;

	index = 0;
	while (s2[index] != '\0')
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

int main( void )
{
    char buffer[80];

    ft_strcpy( buffer, "Hello " );

    printf( "%s\n", buffer );

    return EXIT_SUCCESS;
}
