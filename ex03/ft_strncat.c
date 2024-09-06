/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:00:29 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 22:48:30 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*d)
		d++;
	while (*s && nb-- > 0)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
/* 
int main()
{
	char dest[20] = "Hello";
	char src[] = "World";
	unsigned int nb = 3;
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}
*/