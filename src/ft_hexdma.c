/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/19 00:38:41 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(unsigned long long n)
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

int	ft_hexdma(unsigned int n, char type)
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
		ft_hexdma(num / 16, type);
		num %= 16;
	}
	write(1, &base[num], 1);
	return (count(n));
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
	return (count(n) + 2);
}

// int	main(void)
// {
// 	int	num = 232;
// 	//printf(" El resultado es: ");
// 	ft_hexdma(num, 'X');
// 	printf("\n");
// 	return (0);
// }
