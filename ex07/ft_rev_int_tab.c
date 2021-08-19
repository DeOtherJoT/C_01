void	ft_rev_int_tab(int *tab, int size)
{
	int	tempHold;
	int	index;
	int	revIndex;
	int	counter;

	index = 0;
	revIndex = size - 1;
	counter = size / 2;
	while (counter > 0)
	{
		tempHold = tab[index];
		tab[index] = tab[revIndex];
		tab[revIndex] = tempHold;
		index++;
		counter--;
		revIndex--;
	}
}
