int	ft_str_is_alpha(char	*str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	char	tab[8] = "";
	printf("%d\n",ft_str_is_alpha(tab));
	printf("%d\n",ft_str_is_alpha("test5"));
	printf("%d\n",ft_str_is_alpha("TESst"));
	printf("%d\n",ft_str_is_alpha("test"));
	printf("%d\n",ft_str_is_alpha("test "));
	printf("%d\n",ft_str_is_alpha("t$est^"));
}
