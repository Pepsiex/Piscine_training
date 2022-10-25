char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] = str[i] - 32;
		else
			return (0);
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char	str[] = "coucou";

	printf("%s\n", ft_strupcase(str));
	return (0);
}
