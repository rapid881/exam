#include <unistd.h>
#include <stdio.h>
#define SEP(x) (x == ' ' || x == '\t')

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	char *str;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = av[1];
	while (SEP(*str))
		str++;
	while (*str)
	{
		if (SEP(*str))
		{
			while (SEP(*str))
				str++;
			if (*str)
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
			}
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
