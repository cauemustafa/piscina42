/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:33:41 by cassem            #+#    #+#             */
/*   Updated: 2024/09/02 20:37:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After ft_ultimate_div_mod: a = %d, b = %d\n", a, b);
	return (0);
}
 */