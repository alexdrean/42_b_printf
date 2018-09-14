/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:37:09 by adrean            #+#    #+#             */
/*   Updated: 2018/09/13 23:49:48 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

static int	print_special(const char **ptr, va_list *argp)
{
	int len;
	char c;

	c = **ptr;
	if (c == 'd' || c == 'i')
		return (ft_putnbr_base(va_arg(*argp, int), 10));
	if (c == 'o')
		return (ft_putnbr_base(va_arg(*argp, unsigned int), 8));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(*argp, unsigned int), 16));
	if (c == 'u')
		return (ft_putnbr_base(va_arg(*argp, unsigned int), 10));
	if (c == 's')
		return (ft_putstr(va_arg(*argp, char*)));
	if (c == 'p')
	{
		len = ft_putstr("0x");
		len += ft_putnbr_base(va_arg(*argp, unsigned long), 16);
		return (len);
	}
	if (c == 'c')
		return (ft_putchar(va_arg(*argp, int)));
	if (c == ' ') {
		while (**ptr == ' ')
			*ptr += 1;
		if (**ptr == 0)
			return (0);
		return (print_special(ptr, argp));
	}
	return (ft_putchar(c));
}

int			b_printf(const char *format, ...)
{
	va_list	argp;
	int		len;

	va_start(argp, format);
	len = 0;
	while (*format != 0)
	{
		if (*format == '%')
		{
			format++;
			len += print_special(&format, &argp);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(argp);
	return (len);
}
