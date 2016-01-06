#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
        size_t  index;
        size_t  i;
        size_t  j;

        index = 0;
        if (s2[index] == '\0')
        {
                return ((char *)(s1));
        }
        while (n != 0)
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
		n--;
        }
        return (NULL);
}

int main( void )
  {
    printf( "%s\n", ft_strnstr("tosaltosalut le monde", "", 10) );
    return EXIT_SUCCESS;
  }
