#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648) // Gestion int min
		write(1, "-2147483648", 11);
	if (nb < 0) // Gestion des négatifs
	{
		nb *= -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	if (nb < 10) // Convertion ASCII des chiffres + affichage
	{	
		nb += 48;
		write(1, &nb, 1);
	}
	else // Déconstructions de nombres pour ibtention de chiffres
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);	
	}
}
/*
int main()
{
	ft_putnbr(51384213);
}*/
