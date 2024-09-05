/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:28:53 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 20:36:42 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;
	char	*end;

	ptr = dest;
	end = dest + n;
	while (ptr < end && *src)
		*ptr++ = *src++;
	while (ptr < end)
		*ptr++ = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char			dest[20];
	char			*src;
	unsigned int	n;
	char *test;

	src = "Hello, World!";
	n = 5;
	test = ft_strncpy(dest, src, n);
	printf("Source string: %s\n", src);
	printf("Dest string: %s\n", dest);
	printf("Test string: %s\n", test);
	return (0);
}
 */