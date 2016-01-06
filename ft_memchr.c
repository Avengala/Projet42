#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t		index;

	index = 0;
	str = (unsigned char *)s;
	while (n != 0)
	{
		if (str[index] == (unsigned char)c)
		{
			return (str + index);
		}
		index++;
		n--;
	}
	return (NULL);
}

int main ()
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) ft_memchr (str, 'p', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %ld.\n", pch-str+1);
  else
    printf ("'p' not found.\n");
  return 0;
}
