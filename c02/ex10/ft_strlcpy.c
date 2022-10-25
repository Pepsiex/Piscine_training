unsigned int ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[5];
	char src[] = "j'aime les pipe rigate     ! ";
	printf("[Antoine] Len :[%u] -|- String :[%s]\n", ft_strlcpy(dest, src, 5),dest);
	return (0);
}
