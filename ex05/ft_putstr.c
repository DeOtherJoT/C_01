#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
