#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		index;
	unsigned char	*string;

	index = 0;
	string = (unsigned char *) s;
	while (n != 0)
	{
		string[index] = (unsigned char)c;
		index++;
		n--;
	}
	return (s);
}
 
int main()
{
    char DuplicateString[255];
    ft_memset(&DuplicateString,'#',10);
    DuplicateString[10] = 0;
    printf("DuplicateString = %s\n",DuplicateString);
    return 0;
}
