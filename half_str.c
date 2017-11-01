#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_half_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
		while (i < argc)
		{
			ft_half_str(argv[i]);
			ft_putchar('\n');
			i++;
		}
	return (0);
}

