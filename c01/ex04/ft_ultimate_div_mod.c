void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nbr1;
	int	nbr2;
	int	div; // resultat de la division
	int	mod; // resultat du modulo

	nbr1 = *a; // j'initialise la valeur de nbr1 a la valeur pointée par a
	nbr2 = *b; // j'initialise la valeur de nbr2 a la valeur pointée par b
	div = nbr1 / nbr2; // division
	mod = nbr1 % nbr2; // modulo
	*a = div; // div = resultat de div
	*b = mod; // mod = resultat de mod	
}
#include <stdio.h>
int main()
{
	int	*a;
	int	*b;
	int	nbr1 = 10;
	int	nbr2 = 2;

	a = &nbr1;
	b = &nbr2;
	ft_ultimate_div_mod(a, b);
	printf("%d,%d", *a, *b);
	return (0);
}
