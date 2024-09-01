/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexanfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:26:45 by alexanfe          #+#    #+#             */
/*   Updated: 2024/09/01 18:31:31 by alexanfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//change later to <strings.h>
void	free_allocated_memory(char **substrings, int start, int num_substrings);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	**allocate_memory_for_substrings(int num_substrings);
int		ft_strlen(char *str);
int		calculate_num_substrings(int len);
int		get_current_size(int current_position);
int		alloc_substrings(char **substrings, char *str, int n_sb, int len);

char	**split_string(char *str)
{
	char	**substrings;
	int		len;
	int		num_substrings;

	len = ft_strlen(str);
	num_substrings = calculate_num_substrings(len);
	substrings = allocate_memory_for_substrings(num_substrings);
	if (substrings == NULL)
		return (NULL);
	if (!alloc_substrings(substrings, str, num_substrings, len))
	{
		free_allocated_memory(substrings, 0, num_substrings);
		return (NULL);
	}
	return (substrings);
}
