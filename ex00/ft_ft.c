/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:22:31 by cassem            #+#    #+#             */
/*   Updated: 2024/08/30 22:08:43 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	main(void)
{
	int	n;
	int	*nbr;

	n = 0;
	nbr = &n;
	printf("nbr = &n\nn = 0\n");
	printf("Value pointed to by nbr: %d\n", *nbr);
	ft_ft(nbr);
	printf("After ft_ft(nbr): n = %d\n", n);
	return (0);
}
*/
