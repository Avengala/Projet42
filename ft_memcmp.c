#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*string;
	size_t		index;

	index = 0;
	str = (unsigned char *)s1;
	string = (unsigned char *)s2;
	while (n != 0)
	{
		if (str[index] != string[index])
		{
			return (str[index] - string[index]);
		}
		index++;
		n--;
	}
	return (0);
}

int main ()
{
  char buffer1[] = "zz";
  char buffer2[] = "za";

  int n;

  n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

  return (0);
}
