/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbastos- <gbastos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:46:26 by gbastos-          #+#    #+#             */
/*   Updated: 2024/08/18 16:37:21 by gbastos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0)
			{
				if (j == 0 || j == y - 1)
				{
					ft_putchar('A');
				}
				else
					ft_putchar('B');
			}
			else if (i == x - 1)
			{
				if (j == 0 || j == y - 1)
				{
					ft_putchar('C');
				}
				else
					ft_putchar('B');
			}
			else if (i != 0 || i != x-1){
				if (j == 0 || j == y -1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
int	main(void)
{
	rush(123,47);
	return (0);
}
