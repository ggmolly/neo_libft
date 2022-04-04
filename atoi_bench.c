#include "includes/chartype.h"
#include <stdlib.h>

int	ft_atoi_libft_opt(const char *s)
{
	int				signe;
	register int	n;
	register int	i;
	register char	c;

	signe = 1;
	i = -1;
	n = 0;
	c = s[++i];
	while (ft_isblank(c))
		c = s[++i];
	if (c == 45 || c == 43)
	{
		if (c == '-')
			signe = -1;
		c = s[++i];
	}
	while (ft_isdigit(c))
	{
		n = n * 10 + c - 48;
		c = s[++i];
	}
	return (n * signe);
}

int	ft_atoi_libft_org(const char *s)
{
	int		signe;
	int		i;
	long	n;

	signe = 1;
	i = 0;
	n = 0;
	while (ft_isblank(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signe = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n * signe > 2147483647)
			return (-1);
		else if (n * signe < -2147483648)
			return (0);
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (n * signe);
}

int	main(void) {
	register int i = 0;
	while (++i < 256) {
		const char *s1 = "123456789";
		const char *s2 = "-123456789";
		const char *s3 = "1";
		const char *s4 = "0";
		const char *s5 = "-1";
		const char *s6 = "dkmjkfksajfslajkl23818271783";

		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s1);
		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s2);
		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s3);
		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s4);
		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s5);
		{{ANY:atoi,ft_atoi_libft_opt,ft_atoi_libft_org}}(s6);
	}
	return (0);
}