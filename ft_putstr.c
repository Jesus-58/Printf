#include "printf.h"

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
