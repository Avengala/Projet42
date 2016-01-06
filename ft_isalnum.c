#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

int main()
{
	int I;
 	for(I = 48; I <= 127; I++)
	{
  		printf("%c = %i, ",I,ft_isalnum(I)?1:0);
	 }
	 printf("\n");
// a finir avec isalpha et isdigit
 	return 0;
}
