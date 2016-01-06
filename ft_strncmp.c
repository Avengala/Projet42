#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	test;

	index = 0;
	while (n != 0 && s1[index] == s2[index])
	{
		test= index + 1;
		if (s1[test] == '\0' || s2[test] == '\0')
		{
			return (s1[index] - s2[index]);
		}
		index++;
		n--;
	}
	return (s1[index] - s2[index]);		
}

int main( void )
  {
	int	chiffre;

	chiffre = 3;
    printf( "ft_strncmp = %d\n", strncmp( "abcdefx", "abcDEF", 10 ) );
    printf( "ft_strncmp = %d\n", strncmp( "", "",  6 ) );
    printf( "ft_strncmp = %d\n", strncmp( "abcdef", "abcDEF",  chiffre ) );
    printf( "ft_strncmp = %d\n", strncmp( "abcdef", "abcDEF",  0 ) );

    printf( "strncmp = %d\n", strncmp( "abcdefx", "abcDEF", 10 ) );
    printf( "strncmp = %d\n", strncmp( "", "",  6 ) );
    printf( "strncmp = %d\n", strncmp( "abcdef", "abcDEF",  chiffre ) );
    printf( "strncmp = %d\n", strncmp( "abcdef", "abcDEF",  0 ) );
    return EXIT_SUCCESS;
}
