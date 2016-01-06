#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		index;
	unsigned char   *str;	
	unsigned char   *string;	

	index = 0;
	str = (unsigned char *) src;
	string = (unsigned char *) dest;
	while (n != 0)
	{
		string[index] = str[index];
		index++;		
		n--;
	}
	return (dest);
}
 
int main()
 {
	 char A[12];
	 char B[15];
	 int I;

	 for(I=0; I < 12; I++)
 	{  		
		A[I] = I;
	 }
	B[12] = 'a';
	 ft_memcpy(&B,&A,12);
	 for(I=0; I < 13; I++)
	 {
  		printf("B[%i] = %i\n",I,B[I]);
 	}
 	return (0);
}
