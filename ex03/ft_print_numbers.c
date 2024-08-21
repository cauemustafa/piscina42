/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:18:56 by cassem            #+#    #+#             */
/*   Updated: 2024/08/21 18:49:03 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	*numbers;

	numbers = "0123456789";
	write(1, numbers, 10);
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
