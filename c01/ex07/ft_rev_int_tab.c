void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	while (i < size / 2)
	{
		buffer = tab[size - 1 - i];
		tab[size - 1 - i] = tab [i];
		tab[i] = buffer;
		i++;
	}
}
#include <stdio.h>
int main()
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int	j = 0;

	while (j < 5)
	{
		printf("%d", tab[j]);
		j++;
	}
	return (0);
}
