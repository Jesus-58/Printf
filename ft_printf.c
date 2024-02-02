/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:08:36 by jesumore          #+#    #+#             */
/*   Updated: 2024/02/02 20:16:53 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
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

int ft_printf(char const *format, ...);
{
	
}

int main(void)
{
	ft_printchr('');
	printf("");
	return (0);
}