#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strncpy(char *s1, const char *s2, size_t n)
{
        size_t  index;

        index = 0;
        while (n != 0)
        {
                s1[index] = s2[index];
                index++;
		n--;
        }
        s1[index] = '\0';
        return (s1);
}

int main( void )
{
    char buffer[80];

    ft_strncpy( buffer, "Hello ", 3 );

    printf( "%s\n", buffer );

    return EXIT_SUCCESS;
}
