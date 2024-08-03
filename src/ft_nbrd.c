/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:33:18 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/19 00:53:03 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

// int	ft_char(char c)
// {
// 	write(1, &c, 1);
// 	return (10);
// }

int	ft_nbrd(int nb)
{
	if (nb < 0)
		return (10);
	if (nb > 9)
	{
		ft_nbrd(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (0);
}

// int	main(void)
// {
// 	int	nb = 555;
// 	printf("\nresultado es: %d\n", ft_nbrd(nb));
// 	return (0);
// }
