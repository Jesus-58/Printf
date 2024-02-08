#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	if (!c)
		return (-1);
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (!s)
		return (-1);
	while (s)
		write(1, *s, ft_strlen(s));
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr("-2147483648");
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar('0' + n);
}

int	ft_printf(char const *format, ...);
{
	int		i;
	va_list	args;

	i = 0;
	if (!str)
		return (-1)
	while (str[i++])
	{
		if (str[i] == '%')
			str[i]++;
			if(str[i] == 'c' || str[i] == '%')
				ft_putchr();
				i++;
			if (str[i] == 's')
				ft_putstr();
				i++;
			if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr();
				++i;
			if (str[i] == 'p')
				ft_putptr();
				i++;
				.
				.
				.
		write(1, str[i], 1);
		i++;
	}
	return (i);		
}
