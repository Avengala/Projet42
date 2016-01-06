#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static char	*ft_strsubb(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * len + 1);
	while (start < len)
	{
		*str = s[start];
		start++;
		str = str + 1;
	}
	*str = '\0';
	return (str - len);
}

static int	ft_count_word(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i] != '\0' || s[i - 1] != c)
			j++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**str;
	int		i;
	int		j;
	int		l;
	int		x;

	x = 0;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	l = ft_count_word(s, c) - 1;
	printf("test l : %d\n", l);
	str = (char **)malloc(sizeof(char *) * l + 1);
	while (i < l)
	{
		j = 0;
		while (s[x] !='\0' && s[x] == c)
			x++;
		while (s[x] && s[x] != c)
			x++;
		*(str++) = ft_strsubb(s, 0, j);
		s[x + j];
		i++;
	}
	printf("%s s", *str);
	*str = NULL;
	return (str - l);
}
int main( void )
{
    char buffer[80];
    char** where;
    char i;
	int a = 0;
	int b = 0;
        i = 'I';
    strcpy( buffer, "  ta     m er e   marc     " );

    where = ft_strsplit(buffer, ' ');
	while(where[a][b] != '\0')
	{
		while( where[a][b] != '\0')
		{
			printf("%c", where[a][b]);
    			b++;
		}
		b = 0;
		printf("\n");
		a++;
	}
	printf("bnjour");
	return EXIT_SUCCESS;
}
