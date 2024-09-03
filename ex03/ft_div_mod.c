/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:22:49 by cassem            #+#    #+#             */
/*   Updated: 2024/09/02 21:42:45 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Modulo: %d\n", mod);
	return (0);
}
 */