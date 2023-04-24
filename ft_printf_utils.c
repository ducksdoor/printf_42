/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:28:07 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/23 20:16:57 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

int	ft_putchar(char s)
{
	write (1, &s, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	x;

	x = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
	return (x);
}

int	ft_len_nbr(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	x;

	x = ft_len_nbr(n);
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		ft_putnbr(n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (x);
}
