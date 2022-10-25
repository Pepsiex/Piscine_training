int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
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
	unsigned int	nb = -1;
	unsigned int	nb1 = -1;
	char	dest[55] = "J'aime les ";
	char	dest1[55] = "J'aime les ";
	char	src[] = "Pipe Rigate !             ";
	char	src1[] = "Pipe Rigate !             ";

	printf("Customs		:[%s]\n",ft_strncat(dest, src, nb));
	printf("Original	:[%s]\n", strncat(dest1, src1, nb1));
	printf("%u\n",nb);
	return (0);
}
