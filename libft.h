/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrean <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:19:48 by adrean            #+#    #+#             */
/*   Updated: 2018/09/13 22:19:59 by adrean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *str);
char	*ft_strncpy(char *dst, const char *str, size_t len);
char	*ft_strchr(const char *str, int character);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_putchar(char c);
int		ft_putdigit(char d);
int		ft_putstr(char *str);
int		ft_putnbr_base(long n, char base);

#endif
