#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			ft_putchar(str[i]);
			i++;
		}	
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
			ft_ulstr(argv[i]);
			i++;
		}
	return (0);
}

