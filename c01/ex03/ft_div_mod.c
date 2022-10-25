void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	save_div;
	int	save_mod;
	
	save_div = a / b;
	save_mod = a % b;
	*div = save_div;
	*mod = save_mod;
}
/*
#include <stdio.h>
int main()
{
	int	*res_div;
	int	*res_mod;
	int	a = 26;
	int	b = 5;

	res_div = &a;
	res_mod = &b;
	ft_div_mod(a, b, res_div, res_mod);
	printf("Resultat Div:	[%d]\nResultat Mod:	[%d]\n", *res_div, *res_mod);
	return (0);
}*/
