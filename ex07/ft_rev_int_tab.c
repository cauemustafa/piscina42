/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:06:21 by cassem            #+#    #+#             */
/*   Updated: 2024/09/06 01:55:28 by cassem           ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	i = -1;
	end = (size - 1);
	while (++i < size / 2)
		ft_swap(&tab[i], &tab[end - i]);
	tab[size] = '\0';
}
/* 
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	
	ft_rev_int_tab(tab, size);

	printf("\nReversed array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return (0);
} */