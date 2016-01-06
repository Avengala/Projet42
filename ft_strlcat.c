#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  index;
        size_t  i;

        i = 0;
	index = 0;
        index = strlen(dst);
	size = size - index - 1;
        while (size != 0)
        {
                dst[index] = src[i];
                index++;
                i++;
                size--;
        }
        dst[index] = '\0';
        return (dst);
}

int main(void)
{
   char dest[20] = "Une chaine";
   char src[] = "ceci estune chaine qui ne rentre pas dans dest";
 
   ft_strlcat(dest, src, 19);
   printf("%s\n", dest);
 
   return (0);
}
