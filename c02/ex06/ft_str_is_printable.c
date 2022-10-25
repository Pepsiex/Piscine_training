int	ft_str_is_printable(char	*str)
{
	while (*str != '\0')
	{
		if (*str <= 126 && *str >= 32)
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_str_is_printable(""));
	 printf("%d\n",ft_str_is_printable("test5"));
}
