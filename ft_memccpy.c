#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";

void *ft_memccpy(void *dest, const void *src, int c,size_t n)
{
        size_t		index;
        unsigned char   *str;
        unsigned char   *string;

        index = 0;
        str = (unsigned char *) src;
        string = (unsigned char *) dest;
        while (n != 0)
        {
                string[index] = str[index];
		if (string[index] == (unsigned char)c)
		{
			return (dest);
		}
                index++;
                n--;
        }
	return (0);
}

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, 'o', 80 );

    printf( "%s\n", buffer );
    
    return (0);
}
