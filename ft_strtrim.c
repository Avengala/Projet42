#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int	j;
	
	j = 0;
	str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (s != NULL && str != NULL)
	{
		str = strcpy(str, s);
		while (str[j] == '\n' || str[j] == '\t' || str[j] == ' ')
			j++;
		str = strchr(str, str[j]);
		j = strlen(str);
		while (j != 0)
		{
			if (str[j] == '\n' || str[j] == ' ' || str[j] == '\t')
				str[j] = '\0';
			if (str[j] >= 'a' && str[j] <= 'z')
				j = 1;
			else if (str[j] >= 'A' && str[j] <= 'Z')
				j = 1;
			j--;
		}
		return (str);
	}
	return (NULL);
}

int main( void )
{
    char buffer[80];
    char* where;
    char i;
        i = 'I';
    strcpy( buffer, "     ta mere	marc     " );

    where = ft_strtrim(buffer);
	
    if( where == NULL ) {
        printf( "'x' not found\n" );
    } else {
        printf( "'x' found:%s\n", where );
    }

    return EXIT_SUCCESS;
}
