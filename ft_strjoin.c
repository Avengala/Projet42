#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s1 != NULL && s2 != NULL && str != NULL)
	{	
		while (s1[j] != '\0')
		{
			str[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[i] = s2[j];
		if (str[i] == '\0')
		{
			return (str);
		}
	}
	return (NULL);
}

int	main(void)
{
	char	*s1;
	char 	*s2;
	
	s1 = "Bonjour";
	s2 = " au revoir";
	s2 = ft_strjoin(s1, s2);
	printf("%s", s2);
	return (0);
}
