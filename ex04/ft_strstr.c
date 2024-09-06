/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:05:54 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 23:31:04 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while (*s1 && *s2 && *s1++ == *s2++)
			if (!*s2)
				return (str);
		str++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "o";
	char *result = ft_strstr(str, to_find);
	printf("%s\n", result);
	return (0);
}
 */