#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char	*ft_strsub(char const *s, unsigned int start, size_t len)
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
		if ((s[i] != '\0' || s[i] == c) ||  s[i - 1] != c)
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

	i = 0;
	l = ft_count_word(s, c);
	str = (char **)malloc(sizeof(char *) * l + 1);
	while (i < l)
	{
		j = 0;
		while (*s && *s == c)
			s = s + 1;
		while (s[j] && s[j] != c)
			j++;
		*(str++) = ft_strsub(s, 0, j);
		s = s + j;
		i++;
	}
	*str = '\0';
	return (str - l);
}

int main(void)
{
        printf("bonjour");
        char    *buffer;
        char    **where;
        int     i=0;
        int     y=0;
        buffer = "mol les ges c4est nul";
        where = ft_strsplit(buffer, ' ');
        if (where == NULL)
                return (0);
        while (where[i][y] != '\0')
        {
                while (where[i][y] != '\0')
                {
                        printf("%c", where[i][y]);
                        y++;
                
		}
		y = 0;
		printf("\n");
                i++;
        }
        return (0);
}
