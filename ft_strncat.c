#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
        size_t  index;
        size_t  size;

        size =  0;
        index = 0;
        index = strlen(s1);
        while (n != 0)
        {
                s1[index] = s2[size];
                index++;
                size++;
		n--;
        }
        s1[index] = '\0';
        return (s1);
}

int main( void )
{
    char buffer[80];

   strcpy( buffer, "Hello " );
   ft_strncat( buffer, "World ", 2 );
    printf( "%s\n", buffer );

    return EXIT_SUCCESS;
}
