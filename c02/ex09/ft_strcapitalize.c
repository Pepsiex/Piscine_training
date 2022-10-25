int	ft_is_letter_or_number(char c)
{
	if ((c <= 57 && c >= 48) || (c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}

int	ft_letter_is_upper(char c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}

int	ft_letter_is_lower(char c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

int	ft_is_special_char(char c)
{
	if ((c <= 126 && c >= 123) || (c <= 96 && c >= 91) ||
	       	(c <= 64 && c>= 58) || (c <= 47 && c >= 32))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_letter_is_lower(str[0]))
		{
			str[0] = str[0] - 32;
		}
		if (ft_is_special_char(str[i] - 1))
		{
			str[i] = str[i] - 32;
		}
		if (ft_letter_is_upper(str[i] - 1))
		{
			if (ft_letter_is_upper(str[i]))
				str[i] = str[i] + 32;
		}
		if (ft_letter_is_lower(str[i] - 1))
		{
			if (ft_letter_is_upper(str[i]))
				str[i] = str[i] + 32;
		} 
		else
			return (str);
	i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char	str[] = "sALut, coMMent tu vas ? 42mOTs quaRANte-deux; cinQUANte+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
