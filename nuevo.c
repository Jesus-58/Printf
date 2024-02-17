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
		//Si el ptr es null
		//return (write(1, "(NULL)", 6));
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
	int	count;

	count = 0;
	if (n == -2147483648)
			return(write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n / 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar('0' + n);
	return (count);
}

int	ft_putunbr(int n)
{
	int count;

	count = 0;
	
	return (count);
}

static int	select_format(char type, va_list args)
{
	int		count_chr;
	void	*ptr;

	count_chr = 0;
	if(type == 'c')
		count_chr += ft_putchr(va_arg(args, int);
	if (type == '%')
		return (write(1, "%", 1));
	else if (type == 's')
		count_chr += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		count_chr += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count_chr += ft_putunbr(va_arg(args, unsigned int));
	else if (type == 'x')
		cont_chr += ft_puthex_minus(va_arg(args, unsigned int));
	else if (type == 'X')
		cont_chr += ft_puthex_mayus(va_arg(args, unsigned int));
	else if (type == 'p')
	{
		count_chr += ftputstr("0x");
		count_chr += ft_putptr(va_arg(args, unsigned long long));
	}

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
	va_end(args);
	return (total_chr);
}
