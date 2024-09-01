/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_class.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:36:37 by cassem            #+#    #+#             */
/*   Updated: 2024/09/01 14:41:49 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

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

	dict_index = 1;
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

#include <stdio.h>

int main(int argc, char **argv)
{
	int class;
	int dict_index;

	if (argc < 2)
		return (1);
	class = decimal_class(argv[1]);
	dict_index = get_dict_index(class);
	printf("%i\n", class);
	printf("%i", dict_index);
	return (0);
}
