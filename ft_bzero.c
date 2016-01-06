#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		index;

	index = 0;
        while (n != 0)
        {
                ((unsigned char *)s)[index] = 0;
                index++;
                n--;
        }
}

int main()
 {
         char B[21];
         int I;
	for(I=0; I< 21; I++)
	{
		B[I]= I;
	}
        ft_bzero(&B, 10);
         for(I=0; I < 21; I++)
         {
                printf("B[%i] = %i\n",I,B[I]);
        }
        return (0);
}
