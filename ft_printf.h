/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:51:53 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/22 21:27:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char s);
int	ft_strlen(const char *s);
int	ft_putstr(char *s);
int	ft_len_nbr(int nb);
int	ft_putnbr(int n);
int	ft_putnbr_hx(unsigned int n, char const s);
int	ft_ptr(unsigned long n);
int	ft_positivenumber(unsigned int n);
int	ft_printf(char const *str, ...);

#endif
