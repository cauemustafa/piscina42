/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexanfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:05:59 by alexanfe          #+#    #+#             */
/*   Updated: 2024/08/31 19:15:35 by alexanfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 1000
#define MAX_PAIRS 100

struct s_kv
{
	char	key[MAX_STRING_LENGTH];
	char	value[MAX_STRING_LENGTH];
};

struct s_kv	*ft_handle_dict(char *dict_name, int *pair_count);
void		ft_remove_whitespace(char *str);
void		ft_parse_buffer(char *buffer, struct s_kv *pairs, int *pair_count);
void		ft_extract_key_value(char *line, struct s_kv *pair);
int			ft_is_space(char c);

struct s_kv	*ft_handle_dict(char *dict_name, int *pair_count)
{
	int					fd;
	ssize_t				bytes_read;
	char				buff[10000];
	struct s_kv			*pairs;

	fd = open(dict_name, O_RDONLY);
	pairs = malloc(sizeof(struct s_kv) * MAX_PAIRS);
	*pair_count = 0;
	if (!pairs)
		return (NULL);
	if (fd == -1)
		return (free(pairs), NULL);
	bytes_read = read(fd, buff, (sizeof(buff) - 1));
	if (bytes_read == -1)
		return (close(fd), free(pairs), NULL);
	buff[bytes_read] = '\0';
	ft_parse_buffer(buff, pairs, pair_count);
	close(fd);
	return (pairs);
}

void	ft_parse_buffer(char *buffer, struct s_kv *pairs, int *pair_count)
{
	char	*line;
	char	*end_of_line;

	*pair_count = 0;
	line = buffer;
	while (*line && *pair_count < MAX_PAIRS)
	{
		end_of_line = line;
		while (*end_of_line && *end_of_line != '\n')
			end_of_line++;
		if (*end_of_line == '\n')
			*end_of_line = '\0';
		ft_remove_whitespace(line);
		ft_extract_key_value(line, &pairs[*pair_count]);
		(*pair_count)++;
		line = end_of_line;
		if (*line == '\0')
			line++;
	}
}

void	ft_extract_key_value(char *line, struct s_kv *pair)
{
	char	*colon;
	int		key_index;
	int		value_index;

	colon = line;
	while (*colon && *colon != ':')
		colon++;
	key_index = 0;
	while (line < colon && key_index < MAX_STRING_LENGTH - 1)
	{
		pair->key[key_index++] = *line++;
	}
	pair->key[key_index] = '\0';
	line = colon + 1;
	value_index = 0;
	while (*line && value_index < MAX_STRING_LENGTH - 1)
	{
		pair->value[value_index++] = *line++;
	}
	pair->value[value_index] = '\0';
}

void	ft_remove_whitespace(char *str)
{
	char	*dst;

	dst = str;
	while (*str)
	{
		if (!ft_is_space((unsigned char)*str))
		{
			*dst++ = *str;
		}
		str++;
	}
	*dst = '\0';
}

int	ft_is_space(char c)
{
	if ((c > '\t' && c < '\r') || (c == ' '))
	{
		return (1);
	}
	return (0);
}
