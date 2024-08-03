/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:20:45 by asilva-o          #+#    #+#             */
/*   Updated: 2024/08/03 16:17:21 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *str)

{
	int	i;

	i = 0;
	if (str == NULL)
	{
		i = ft_str("(null)");
		return (i);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

// int	main(void)

// {
// 	char	*str = NULL;
// 	int	x = 0;
// 	ft_str(NULL);
//  x = printf("%s", str);
//  printf("%i", x);

// 	return (0);
// }
