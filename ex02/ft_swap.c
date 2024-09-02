/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:11:59 by cassem            #+#    #+#             */
/*   Updated: 2024/09/02 20:19:53 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("Before ft_swap: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After ft_swap: a = %d, b = %d\n", a, b);
	return (0);
}
 */
