/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:28:53 by cassem            #+#    #+#             */
/*   Updated: 2024/09/04 05:48:29 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*end;

	end = dest + n;
	while (dest < end && *src)
		*dest++ = *src++;
	while (dest < end)
		*dest++ = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char			dest[20];
	char			*src;
	unsigned int	n;

	src = "Hello, World!";
	n = 5;
	ft_strncpy(dest, src, n);
	printf("Copied string: %s\n", dest);
	return (0);
}
 */