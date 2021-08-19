void	ft_sort_int_tab(int *tab, int size)
{
	int	tempHold;
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
			{
				tempHold = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tempHold;
			}
			j++;
		}
		i++;
	}
}
