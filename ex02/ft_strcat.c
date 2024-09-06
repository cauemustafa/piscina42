/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:30:20 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 21:52:35 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*d)
		d++;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = "World";
	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
