/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etri.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:36:27 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/19 00:53:19 by asilva-o         ###   ########.fr       */
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

int	ft_etri(int numero)
{
	if (numero < 0)
		return (10);
	if (numero > 9)
	{
		ft_etri(numero / 10);
		numero %= 10;
	}
	else
	{
		return (10);
	}
	ft_char (numero + '0');
	return (0);
}

// int	main(void)
// {
// 	int	numero = 22;
// 	printf("\nresultado es: %i\n", ft_etri(numero));
// 	return (0);
// }
