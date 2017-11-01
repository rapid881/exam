#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	char nl;
	char *arg;

	nl = '\n';
	if (ac != 2)
	{
		write(1, &nl, 1);
		return (0);
	}
	arg = av[1];
	while (*arg)
	{
		if ((*arg >= 'a' && *arg < 'z') || (*arg >= 'A' && *arg < 'Z'))
			ft_putchar(*arg + 1);
		else if (*arg == 'z' || *arg == 'Z')
			ft_putchar(*arg - 25);
		else
			ft_putchar(*arg);
		arg++;
	}
	write(1, &nl, 1);
	return (0);
}
