/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:57:49 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/09/01 13:53:08 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_int(char *str)
{
	int	i;
	int	n;

	n = 39;
	i = 0;
	while (str[i])
	{
		if (str[i] == '.' || str [i] == '-' || str[i] == ',')
			return (1);
		else if (i > (n - 1) || !(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

char	*trim_starting_zeros(char *str)
{
	while (*str == '0')
		str++;
	return (str);
}
