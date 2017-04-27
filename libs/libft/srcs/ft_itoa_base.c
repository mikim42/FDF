#include "libft.h"

static void	ft_chklen(int n, int base, int *len)
{
	int i;

	i = 0;
	if (n < 0)
		i++;
	while (n > 1 || n < -1)
	{
		n /= base;
		i++;
	}
	*len = i;
}

char		*ft_itoa_base(int value, int base)
{
	char	*res;
	char	bs[17];
	int		len;

	len = 1;
	ft_strcpy(bs, "0123456789ABCDEF");
	if (value == 0)
		return (ft_strdup("0"));
	if (value == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_chklen(value, base, &len);
	res = (char*)malloc(sizeof(char) * len + 1);
	res[len--] = '\0';
	if (value < 0)
	{
		value *= -1;
		res[0] = '-';
	}
	while (value > base)
	{
		res[len--] = bs[value % base];
		value /= base;
	}
	res[len] = bs[value % base];
	return (res);
}
