char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
		else
			return (0);
	i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char	str[] = "PUTOS";
	
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
