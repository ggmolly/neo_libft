int	ft_isalpha_while(int c)
{
	register int i = 96;
	register int j = 64;
	while (++i <= 122)
		if (c == i)
			return (1);
	while (++j <= 90)
		if (c == j)
			return (1);
	return (0);
}

int	ft_isalpha_numbers(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

int	ft_isalpha_chars(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 65 && c <= 'z'));
}

int	ft_isalpha_array(int c)
{
	char alpha[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	register int i = -1;
	while (alpha[++i])
	{
		if (c == alpha[i])
			return (1);
	}
	return (0);
}

int	ft_isalpha_arrayint(int c)
{
	int	alpha[53] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
	register int i = -1;
	while (alpha[++i])
	{
		if (c == alpha[i])
			return (1);
	}
	return (0);
}

int	main(void) {
	register int i = 0;
	while (i < 256) {
		{{ANY:ft_isalpha_while,ft_isalpha_numbers,ft_isalpha_chars,ft_isalpha_array,ft_isalpha_arrayint}}(i);
		++i;
	}
	return (0);
}