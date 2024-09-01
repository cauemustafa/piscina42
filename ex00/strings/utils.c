/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexanfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:01:34 by alexanfe          #+#    #+#             */
/*   Updated: 2024/09/01 19:01:36 by alexanfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	free_allocated_memory(char **substrings, int start, int num_substrings);
char	**allocate_memory_for_substrings(int num_substrings);
int		get_current_size(int current_position);
int		alloc_substrings(char **substrings, char *str, int n_sb, int len);
int		calculate_num_substrings(int len);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);

void	free_allocated_memory(char **substrings, int start, int num_substrings)
{
	int	j;

	j = start;
	while (j < num_substrings)
	{
		if (substrings[j] != NULL)
			free(substrings[j]);
		j++;
	}
	free(substrings);
}

char	**allocate_memory_for_substrings(int num_substrings)
{
	char	**substrings;
	int		i;

	i = 0;
	substrings = (char **)malloc(num_substrings * sizeof(char *));
	if (substrings == NULL)
		return (NULL);
	while (i < num_substrings)
	{
		substrings[i] = NULL;
		i++;
	}
	return (substrings);
}

int	get_current_size(int current_position)
{
	if (current_position >= 3)
		return (3);
	return (current_position);
}

int	alloc_substrings(char **substrings, char *str, int n_sb, int len)
{
	char	*source;
	int		current_position;
	int		current_size;
	int		i;

	current_position = len;
	i = n_sb - 1;
	while (i >= 0)
	{
		current_size = get_current_size(current_position);
		substrings[i] = (char *)malloc((current_size + 1) * sizeof(char));
		if (substrings[i] == NULL)
			return (0);
		source = str + current_position - current_size;
		ft_strncpy(substrings[i], source, current_size);
		substrings[i][current_size] = '\0';
		current_position -= current_size;
		i--;
	}
	return (1);
}

int	calculate_num_substrings(int len)
{
	int	num_substrings;
	int	remainder;

	remainder = len % 3;
	num_substrings = len / 3;
	if (remainder != 0)
		num_substrings += 1;
	return (num_substrings);
}
