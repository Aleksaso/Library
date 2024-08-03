/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:33:18 by asilva-o          #+#    #+#             */
/*   Updated: 2024/08/03 16:17:06 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_char(char c)

// {
// 	write(1, &c, 1);
// 	return (1);
// }

int	ft_counter1(int nb)
{
	int	cnt;

	cnt = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		cnt++;
	}
	if (nb == 0)
		cnt++;
	while (nb != 0)
	{
		nb = nb / 10;
		cnt++;
	}
	return (cnt);
}

int	ft_putnbr(int nb)
{
	int	x;

	x = ft_counter1(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (x);
}
/*
int	main(void)
{
	int y;

	y = ft_putnbr(879);
	ft_char('\n');
	ft_putnbr(-2147483648);
	printf("%i", y);
}*/
