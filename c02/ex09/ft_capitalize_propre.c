int	ft_is_alphanum(char c) // vérifie si le caractère est un alpha-numérique
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65) || (c <= 57 && c >= 48))
		return (1);
	else
		return (0);
}

char    *ft_strlowcase(char *str) // met tous les caractères de la string en minuscule
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] <= 90 && str[i] >= 65)
                        str[i] += 32;
        	i++;
        }
        return (str);
}

char	ft_char_upper(char	c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	char 	*s;
 
	s = ft_strlowcase(str);
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
			s[i] = ft_char_upper(s[i]);
		else if (ft_is_alphanum(s[i]) != 1)
			s[i + 1] = ft_char_upper(s[i + 1]);
		i++;
	}
	return (s);
}

#include <stdio.h>
int	main()
{
	char str[] = "sALut, coMMent tu vas ? 42MOts quARANte-deux; cinQUANte+et+un";
	
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
