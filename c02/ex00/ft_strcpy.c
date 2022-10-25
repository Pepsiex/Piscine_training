char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "J'aime les Pipe Rigate !";
	char	src1[] = "J'aime les Pipe Rigate !";
	char	dest[30];
	char	dest1[30];

	printf("Original:	[%s]\n", strcpy(dest, src));
	printf("Custom:		[%s]\n", ft_strcpy(dest1, src1));
	return (0);
}
