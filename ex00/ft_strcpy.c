/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:16:29 by cassem            #+#    #+#             */
/*   Updated: 2024/09/05 19:59:57 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	*src;
	char	dest[20];
	char *address;

	src = "Hello, World!";
	address = ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Address: %p\n", address);
	return (0);
}
 */