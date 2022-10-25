int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[25] ="J'aime les ";
	char dest1[25] ="J'aime les ";
	char src[] ="Pipe Rigate !";
	char src1[] ="Pipe Rigate !";
	
	printf("%s\n",ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	return (0);
}
