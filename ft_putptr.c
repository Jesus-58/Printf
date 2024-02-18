#include "printf.h"

int	ft_putptr(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n / 16)
	{
		count += ft_putptr(n / 16);
		count += ft_putptr(n % 16);
	}
	else
		count += ft_putchar(base[n % 16]);
	return (count);
}
