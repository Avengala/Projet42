#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strrchr(const char *s, int c)
{
        unsigned char   *str;
        size_t          index;

        index = 0;
        str = (unsigned char *)s;
	index = (strlen(str) - 1);
	while (index != -1)
	{
		if (str[index] == (unsigned char)c)
		{
			return (str + index);
		}
		index--;
	}
        return (NULL);
}

int main( void )
{
    char buffer[80];
    char* where;
    
	strcpy( buffer, "video x-rxays" );
    where = ft_strrchr( buffer, 'e' );

    if( where == NULL ) {
   	printf( "'x' not found \n");
	 } else {
        printf( "'x' found: %s\n", where );
    }

    return EXIT_SUCCESS;
}
