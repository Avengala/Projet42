#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	**ft_detect_char(char const *s, char c, int nb, char **str)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
        while (s[i] != '\0' && y < nb)
        {
                while (s[i] == c)
			i++;
                while (s[i] != '\0' && s[i] != c)
		{
			str[y][i] = s[i];
			i++;
                }
		if (s[i] == c ||  s[i -1] != c)
			y++;
	}
	return (str);
}

int	ft_count_case(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (s[i] == c ||  s[i -1] != c)
			j++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int	l;
	int	i;

	i = 0;
	l = ft_count_case(s, c);
	str = (char **)malloc(sizeof(str) * l + 1);
	if (str != NULL)
	{
	}
	return (NULL);
}

int main(void)
{
	printf("bonjour");
	char	*buffer;
	char	**where;
	int	i=0;
	int	y=0;
	buffer = "mol les ges c4est nul";
	where = ft_strsplit(buffer, ' ');
	if (where == NULL)
		return (NULL);
	while (where[i][y] != '\0')
	{
		while (where[i][y] != '\0')
		{
			printf("%c", where[i][y]);
			y++;
		}
		i++;
	}
	return (0);
}
