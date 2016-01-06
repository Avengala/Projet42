#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
int main()
{
        int I;
        for(I = 32; I <= 127; I++)
        {
                printf("%c = %i, ",I,ft_isprint(I)?1:0);
         }
         printf("\n");

        for(I = 32; I <= 127; I++)
        {
                printf("%c = %i, ",I,isprint(I)?1:0);
        }
        printf("\n");
        return 0;
}
