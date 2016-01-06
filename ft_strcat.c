#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	index;
	size_t	size;

	size =  0;
	index = 0;
	index = strlen(s1);
	while (s2[size] != '\0')
	{
		s1[index] = s2[size];
		index++;
		size++;
	}
	s1[index] = '\0';
	return (s1);
}

int main( void )
{
    char buffer[80];

   strcpy( buffer, "Hello " );
   ft_strcat( buffer, "World" );
    printf( "%s\n", buffer );

    return EXIT_SUCCESS;
}
