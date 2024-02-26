/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:15:21 by jesumore          #+#    #+#             */
/*   Updated: 2024/02/26 21:51:25 by jesus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_minus(unsigned int n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n / 16)
	{
		count += ft_puthex_minus(n / 16);
		count += ft_puthex_minus(n % 16);
	}
	else
		count += ft_putchar(base[n % 16]);
	return (count);
}
