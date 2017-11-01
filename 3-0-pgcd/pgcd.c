#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == '-')
			return (0);
		if (str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			res *= 10;
			res = res + str[i] - 48;
		}
		i++;
	}
	return (res);
}

int ft_pgcd(int nb1, int nb2)
{
	int div;

	if (nb1 > nb2)
	  div = nb1 / 2;
	else
	  div = nb2 / 2;
	while ((nb1 % div != 0) || (nb2 % div != 0))
		div--;
	printf("%i", div);
}

int main (int argc, char **argv)
{
	if (argc == 3)
		ft_pgcd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	printf("\n");
	return (0);
}
