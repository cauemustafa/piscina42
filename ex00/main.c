/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:21:14 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/08/31 16:24:31 by ltayra-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
		
int	ft_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str [i] == '-' || str[i] == ',')
			return (1);
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	ft_full_name(char *dict, char *number)
{

	ft_printstr(dict);
	ft_printstr(number);
}

int	main(int argc, char **argv)
{
	char g_standard_dict[] = "numbers.dict";

	if (argc == 2)
	{
		if (ft_integer(argv[1]) == 1)
		{
			ft_printstr("Error");
			return (1);
		}
		ft_full_name(g_standard_dict, argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_integer(argv[2]) == 1)
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
