/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:56:31 by cassem            #+#    #+#             */
/*   Updated: 2024/08/21 19:04:26 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	if (number < 0)
		write(1, &"N", 1);
	else
		write(1, &"P", 1);
}

/*int	main(void)
{
	ft_is_negative(1);
	write(1, &"\n", 1);
	ft_is_negative(0);
	write(1, &"\n", 1);
	ft_is_negative(-1);
	return (0);
}*/
