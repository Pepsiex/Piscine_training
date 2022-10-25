int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_to_find;
	int	i;
	int	j;

	len_to_find = ft_strlen(to_find);
	i = 0;
	if (len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				if (j == len_to_find - 1)
					return (&str[i]);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[25] = "J'aime les Pipe Rigate !";
	char	str1[25] = "J'aime les Pipe Rigate !";
	char	word[] = "Pipe";
	char	word1[]	= "Pipe";

	printf("Original:	[%s]\n", strstr(str, word));
	printf("Customs:	[%s]\n", ft_strstr(str1, word1));
	return (0);
}
