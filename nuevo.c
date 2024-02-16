#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_putchar(int c)
{
	if (!c)
		return (-1);
	else
		return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int count;
	
	count = 0;
	if (!s)
		return (-1);
	while (*s)
	{
		ft_putchar((int)*s);
		count++;
		s++;
	}
	return (count);
}

int	ft_putnbr(int n)
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

static int	select_format(char type, va_list args)
{
	int count_chr;

	count_chr = 0;
	if(type == 'c' || type == '%')
		count_chr += ft_putchr(va_arg(args, int);
	else if (type == 's')
		count_chr += ft_putstr(va_arg(args, char *));
	else if (type == 'd')
		count_chr += ft_putdigit(va_arg(args, int), 10);
	else if (type == 'x')
		cont_chr += ft_puthex(va_arg(args, int), 16);
	else if (type == 'X')
		cont_chr += ft_puthex(va_arg(args, int), 16);
	else if (type == 'p')
		count_chr += ft_putptr(va_arg(args, *));
	else if (type == 'i')
		count_chr += ;
	else if (type == 'u')
		count_chr *= ;
	return (count_chr);
}

int	ft_printf(char const *format, ...);
{
	int		total_chr;
	va_list	args;

	va_start(args, format);
	i = 0;
	if (!format)
		return (-1)
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			total_chr += select_format(*format, args);
		}
		else
		{
			total_chr += write(1, format, 1);
			format++;
		}
	}
	return (total_chr);
}
