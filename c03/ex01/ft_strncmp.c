int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
	char	s1[] = "J'aime les Pipe Rigate !";
	char	s2[] = "J'aime les PipE ! ";

	printf("%d\n", ft_strncmp(s1, s2, 15));
	return (0);
}
