/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2024/08/03 16:16:21 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counter(unsigned long long n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		n *= -1;
	if (n > 15)
	{
		while (n != 0)
		{
			size++;
			n /= 16;
		}
	}
	else
		size++;
	return (size);
}

int	ft_hexd(unsigned int n, char type)
{
	char	*base;
	long	num;

	num = n;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexd(num / 16, type);
		num %= 16;
	}
	write(1, &base[num], 1);
	return (ft_counter(n));
}

void	recursiva(unsigned long long nbr, char *base)
{
	if (nbr > 15)
	{
		recursiva(nbr / 16, base);
		nbr %= 16;
	}
	write(1, &base[nbr], 1);
}

int	ft_ptro(unsigned long long n)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "0x", 2);
	recursiva(n, base);
	return (ft_counter(n) + 2);
}

// int	main(void)
// {
// 	int	p;

// 	p = ft_hexd(232, 'X');
// 	ft_printf(" El resultado es: ");
// 	ft_hexd(p, 'X');
// 	ft_printf("\n");
// }
