unsigned char	swap_bits(unsigned char a)
{
	unsigned char	b;

	b = a;            //  0100 | 0001 - original
	a = a << 4;       //  0001 | 0000 - right filled with 0
	b = b >> 4;       //  0000 | 0100 - left  filled with 0
	return (a | b);   //  0001 | 0100 - merged through 'or' operator
}
