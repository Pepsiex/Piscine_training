int	ft_str_is_lowercase(char	*str)
{
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_str_is_lowercase("548"));
	printf("%d\n",ft_str_is_lowercase(""));
	printf("%d\n",ft_str_is_lowercase("test"));
	printf("%d\n",ft_str_is_lowercase("TEST"));
	printf("%d\n",ft_str_is_lowercase("5=;:;"));
	printf("%d\n",ft_str_is_lowercase("PourbJHK"));
	return (0);
}
