/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:28:40 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 16:54:10 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}
/* 
int main(int argc, char *argv[])
{
	if (argc != 2) {
	    fprintf(stderr, "Usage: %s <string>\n", argv[0]);
	    return (1);
	}
	printf("%s\n", ft_strlowcase(argv[1]));
}
*/