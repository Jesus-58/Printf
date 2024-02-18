#include "printf.h"

int	ft_puthex_mayus(unsigned int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (n / 16)
	{
		count += ft_puthex_mayus(n / 16);
		count += ft_puthex_mayus(n % 16);
	}
	else
		count += ft_putchar(base[n % 16]);
	return (count);
}
