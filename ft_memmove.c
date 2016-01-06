#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;

	if (dest && src)
	{
		str = (unsigned char*)malloc(sizeof(*str) * n);
		memcpy(str, src, n);
		memcpy(dest, str, n);
		free(str);
		return (dest);
	}
	return (NULL);
}

int main()
{
   const char dest[] = "unpeuoldstrong";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(&dest, &src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
