#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		len;
	char	tmp;
	int		i;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len / 2)
	{
		tmp = str[len - (i + 1)];
		str[len - (i + 1)] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}

int main()
{
	char *rev;
	char *str;

	str = "abcdefghi";
	rev = ft_strrev(str);
	printf("%s", rev);
	return (0);
}
