#include <stdio.h>

int             ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
        {       
                c = c + ('a' - 'A');
        }
        return (c);
}

int     main(void)
{
        printf("%c\n", ft_tolower('A'));
        printf("%c\n", tolower('A'));
        return (0);
}
