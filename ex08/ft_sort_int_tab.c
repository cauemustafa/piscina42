/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:31:52 by cassem            #+#    #+#             */
/*   Updated: 2024/09/02 21:36:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/* int main()
{
	int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int size = sizeof(tab) / sizeof(tab[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\nSorted array: ");
	ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
	return 0;
} */