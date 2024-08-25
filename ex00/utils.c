/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:47:32 by cassem            #+#    #+#             */
/*   Updated: 2024/08/24 23:52:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// print a single char
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// print a list of characters
void ft_putstr(int *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

// print table
void ft_print_table(int ***table, int size)
{
    int row;
    int collumn;
    int value;

    row = -1;
    while (++row < size)
    {
        collumn = -1;
        while (++collumn < size)
        {
            value = table[0][row][collumn] + '0';
            ft_putchar(value);
            if (collumn != size - 1)
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}
