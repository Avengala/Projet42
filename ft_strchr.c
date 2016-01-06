#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
        unsigned char   *str;
        size_t          index;

        index = 0;
        str = (unsigned char *)s;
        while (str[index] != '\0')
        {
                if (str[index] == (unsigned char)c)
                {
                        return (str + index);
                }
                index++;
        }
        return (NULL);
}

int main( void )
{
    char buffer[80];
    char* where;
    char i;
	i = 'I';
    strcpy( buffer, "     vIdeo x-rxays" );

    where = strchr( buffer, i );

    if( where == NULL ) {
        printf( "'x' not found\n" );
    } else {
        printf( "'x' found: %s\n", where );
    }

    return EXIT_SUCCESS;
}
