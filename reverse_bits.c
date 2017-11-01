unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;
	int           i;
	
	result = 0;
	i = 0;
	while (i < 8)
	{
		result *= 2;
		result += octet % 2;
		octet /= 2;
		i++;
	}
	return result;
}
