/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simbol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:33:36 by asilva-o          #+#    #+#             */
/*   Updated: 2024/08/03 16:17:14 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_simbol(void)
{
	write(1, "%", 1);
	return (1);
}

// int	main(void)
// {
// 	printf("imprimir símbolo: %%");
// 	printf("\n");
// 	return (1);
// }
