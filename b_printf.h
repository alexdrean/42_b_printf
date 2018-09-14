/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 23:48:56 by adrean            #+#    #+#             */
/*   Updated: 2018/09/13 23:59:24 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_PRINTF_H
# define B_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int			ft_printf(const char *format, ...);

static int	handle_space(const char **ptr, va_list *argp);
static int	print_pointer(va_list *argp);
static int	print_special(const char **ptr, va_list *argp);

#endif
