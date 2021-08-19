void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resDiv;
	int	resMod;

	resDiv = a / b;
	resMod = a % b;
	*div = resDiv;
	*mod = resMod;
}
