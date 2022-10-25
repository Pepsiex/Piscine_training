int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 48 && *str <= 57))
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_str_is_numeric("548"));
	printf("%d\n",ft_str_is_numeric(""));
	printf("%d\n",ft_str_is_numeric("test5"));
	printf("%d\n",ft_str_is_numeric(" '; 5"));
	printf("%d\n",ft_str_is_numeric("5"));
	printf("%d\n",ft_str_is_numeric("carotte"));
	return (0);
}
