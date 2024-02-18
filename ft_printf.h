/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:02 by jesumore          #+#    #+#             */
/*   Updated: 2024/02/02 18:42:33 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int			ft_putchar(int c);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
int			ft_putunbr(unsigned int n);
int			ft_puthex_minus(unsigned int n);
int			ft_puthex_mayus(unsigned int n);
int			ft_putptr(unsigned long n);
static int	select_format(char type, va_list args);
int			ft_printf(char const *format, ...);

#endif
