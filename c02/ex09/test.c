char    ft_char_upper(char      c)
{
        if (c >= 97 && c <= 122)
                c -= 32;
	return (c);
}

#include <stdio.h>
int main()
{
	char	c = 'z';
	
	printf("%c\n", ft_char_upper(c));
	return (0);
}
