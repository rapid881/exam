#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_first(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

/*int		is_instring(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}*/

void	ft_union(char *str, char *str2)
{
	int	i;

	i = 0;
	ft_strcat(str, str2);
	while (str[i])
	{
		if (is_first(str, str[i], i))
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 2)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

