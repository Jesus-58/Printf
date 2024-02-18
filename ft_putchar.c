#include "printf.h"

int	ft_putchar(int c)
{
	if (!c)
		return (-1);
	else
		return (write(1, &c, 1));
}
