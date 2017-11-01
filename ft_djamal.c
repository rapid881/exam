int	ft_djamal(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (i > k)
			return (k);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		else if (j > k)
			return (k);
		else
			return (j);
	}
}
