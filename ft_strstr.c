#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index;
	size_t	i;
	size_t	j;

	index = 0;
	if (s2[index] == '\0')
	{
		return ((char *)(s1));
	}
	while (s1[index] != '\0')
	{
		i = index;
		j = 0;

		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
			{
				return ((char*)(&s1[index]));
			}
		}
		index++;
	}	
	return (NULL);
}

int main( void )
  {
    printf( "%s\n", strstr("tosaltosalut le monde", "a") );
    return EXIT_SUCCESS;
  }
