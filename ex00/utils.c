/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:57:49 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/09/01 22:41:48 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

static int	ft_numlen(int n)
{
    int	len;

    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
    char	*str;
    int		len;
    int		i;

    len = ft_numlen(n);
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
		return (NULL);
    str[len--] = '\0';
	i = 0;
    while (len >= i)
    {
        str[len] = '0' + (n % 10);
        n /= 10;
        len--;
    }
    return (str);
}

char	*trim_starting_zeros(char *str)
{
	while (*str == '0')
		str++;
	return (str);
}
