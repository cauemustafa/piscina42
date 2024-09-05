/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:21:52 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 17:51:53 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/* 
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <string1> <string2>\n", argv[0]);
		return (1);
	}
	printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
};
 */