/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:45:08 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 20:28:23 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/* 
int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	s1 = "Helloax";
	s2 = "Helloaz";
	n = 7;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
 */