/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:21:14 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/09/01 22:40:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);
int	ft_is_int(char *str);

void	ft_full_name(char *dict, char *number)
{
	ft_printstr(dict);
	ft_printstr(number);
}

int	main(int argc, char **argv)
{
	char	g_standard_dict[] = "numbers.dict";

	if (argc == 2)
	{
		if (ft_is_int(argv[1]) == 1)
		{
			ft_printstr("Error");
			return (1);
		}
		ft_full_name(g_standard_dict, argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_is_int(argv[2]) == 1)
		{
			ft_printstr("Error");
			return (1);
		}
		ft_full_name(argv[1], argv[2]);
	}
	else
	{
		ft_printstr("Error");
		return (1);
	}
	return (0);
}
