/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:53:04 by cassem            #+#    #+#             */
/*   Updated: 2024/09/02 21:05:26 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/* int	main(void)
{
	char	*str;

	str = "Hello World!";
	printf("%i\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
	return (0);
}
 */