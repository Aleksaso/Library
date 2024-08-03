/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptro.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:37:53 by asilva-o          #+#    #+#             */
/*   Updated: 2024/08/03 16:17:01 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	recursiva(unsigned long long nbr, char *base)
// {
// 	if (nbr > 15)
// 	{
// 		recursiva(nbr / 16, base);
// 		nbr %= 16;
// 	}
// 	write(1, &base[nbr], 1);
// }

// int	ft_counter(unsigned long long n)
// {
// 	size_t	size;

// 	size = 0;
// 	if (n > 15)
// 	{
// 		while (n != 0)
// 		{
// 			size++;
// 			n /= 16;
// 		}
// 	}
// 	else
// 	{
// 		size++;
// 	}
// 	return (size);
// }

int	ft_ptro(unsigned long long n)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "0x", 2);
	recursiva(n, base);
	return (ft_counter(n) + 2);
}
