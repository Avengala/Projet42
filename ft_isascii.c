#include <stdio.h>

int ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
        int I;
        for(I = 48; I <= 127; I++)
        {
                printf("%c = %i, ",I,ft_isascii(I)?1:0);
         }
         printf("\n");
        
	for(I = 48; I <= 127; I++)
        { 
                printf("%c = %i, ",I,isascii(I)?1:0);
	}
	printf("\n");
// a finir avec isalpha et isdigit
        return 0;
}
