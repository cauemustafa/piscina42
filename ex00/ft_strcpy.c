/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:16:29 by cassem            #+#    #+#             */
/*   Updated: 2024/09/06 00:52:48 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/* 
int main(void)
{
	char *src = "Hello, World!";
	char dest[100];
	char *test;

	test = ft_strcpy(dest, src);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("test: %p\n", test);

	return 0;
} */