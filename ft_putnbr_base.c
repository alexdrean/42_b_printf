/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:22:37 by adrean            #+#    #+#             */
/*   Updated: 2018/09/13 22:23:13 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(long n, char base)
{
	int		len;
	long	divider;

	len = 0;
	if (base == 10 && n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	divider = 1;
	while (divider * base < n)
		divider *= base;
	while (divider)
	{
		len += ft_putdigit(n / divider % base);
		divider /= base;
	}
	return (len);
}
