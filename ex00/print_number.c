/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexanfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:08:09 by alexanfe          #+#    #+#             */
/*   Updated: 2024/09/01 20:30:58 by alexanfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 1000
#define MAX_PAIRS 100

struct s_kv
{
	char	key[MAX_STRING_LENGTH];
	char	value[MAX_STRING_LENGTH];
};

struct s_kv	*ft_handle_dict(char *dict_name, int *pair_count);
char 		*ft_search_dict(struct s_kv *pairs, int pair_count, const char *key);
int			ft_strlen(const char *str);
char		*ft_strcat(char *dest, const char *src);
void		ft_printstr(char *str);


void	append_to_buffer(char *buffer, const char *str)
{
	if (ft_strlen(buffer) > 0 && ft_strlen(str) > 0)
		ft_strcat(buffer, " ");
	ft_strcat(buffer, str);
}

struct s_kv *inintialize_dict(char *dict)
{
	struct s_kv *pairs;
	int pair_count;
	pairs = ft_handle_dict(dict, &pair_count);

	return pairs;
}

char *ft_search_dict(struct s_kv *pairs, int pair_count, const char *key)
{
    for (int i = 0; i < pair_count; i++)
    {
        if (strcmp(pairs[i].key, key) == 0)
        {
            return pairs[i].value;
        }
    }
    return NULL; 
}

void	print_ones(const char *str, char *dict)
{
	struct s_kv *pairs = inintialize_dict(dict);
	char		buffer[100];
	char		*found;
	int 		pair_count;

	pair_count = 50;
	found = ft_search_dict(pairs, pair_count, str);

	append_to_buffer(buffer, found);
	ft_printstr(buffer);
}

void	print_duo(char *str, char *dict)
{
	struct s_kv *pairs;
	char		buffer[100];
	char		*found;
	int 		pair_count;

	pairs = inintialize_dict(dict);
	pair_count = 50;
	if (str[0] == '1')
	{
		found = ft_search_dict(pairs, pair_count, str);
		append_to_buffer(buffer, found);
	}

	ft_printstr(buffer);
}

int main()
{
    char *dict = "numbers.dict";
    char *search_key = "14";

    print_duo(search_key, dict);

    return 0;
}