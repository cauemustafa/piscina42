/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_class.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:36:37 by cassem            #+#    #+#             */
/*   Updated: 2024/09/01 22:29:34 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str);
char    *ft_itoa(int n);

int decimal_class(char *str)
{
    int len;
    int class;

    len = ft_strlen(str);
    if (len % 3 == 0)
        class = len / 3 - 1;
    else
        class = len / 3;
    return (class);
}

int get_dict_index(int class)
{
    int dict_index;
    int i;

    dict_index = 1;
    i = 0;
    if (class == 0)
        dict_index = 100;
    else
        while (class > 0)
        {
            dict_index *= 1000;
            class--;
        }
    return (dict_index);
}

int main(int argc, char **argv)
{
    int class;
    int dict_index;
    char *str;

    if (argc < 2)
        return (1);
    class = decimal_class(argv[1]);
    dict_index = get_dict_index(class);
    str = ft_itoa(dict_index);
    printf("Class: %i\n", class);
    printf("Dictionary Index: %s\n", str);
    free(str);
    return (0);
}