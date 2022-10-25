char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[25];
	char	dest1[25];
	char	*src = "J'aime les Pipe Rigate !";
	char	*src1 = "J'aime les Pipe Rigate !";

	printf("Original:	[%s]\n", strncpy(dest1, src1, 1));
	printf("Customs:	[%s]\n", ft_strncpy(dest, src, 1));
	return (0);
}
