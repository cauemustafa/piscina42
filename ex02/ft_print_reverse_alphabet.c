/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:21:07 by cassem            #+#    #+#             */
/*   Updated: 2024/08/21 18:03:24 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii_index;

	ascii_index = 122;
	while (ascii_index >= 97)
	{
		write(1, &ascii_index, 1);
		ascii_index--;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
