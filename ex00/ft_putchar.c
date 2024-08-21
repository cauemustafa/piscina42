/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:05:16 by cassem            #+#    #+#             */
/*   Updated: 2024/08/21 19:22:26 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// descomente o main para testar a função
/*
 * int main() {
 * 	ft_putchar('a');
 * 	return 0;
 * }
 */
