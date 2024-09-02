/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltayra-y <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:21:14 by ltayra-y          #+#    #+#             */
/*   Updated: 2024/08/31 18:13:49 by ltayra-y         ###   ########.fr       */
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
char *ft_search_dict(struct s_kv *pairs, int pair_count, const char *key);

int main(int argc, char *argv[])
{
    int pair_count;
    struct s_kv *pairs;
	char *finded;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <dictionary_file>\n", argv[0]);
        return 1;
    }

    pairs = ft_handle_dict(argv[1], &pair_count);

    if (!pairs)
    {
        perror("Error reading dictionary file");
        return 1;
    }
	finded = ft_search_dict(pairs, pair_count, "100");
	printf("%s", finded);

    free(pairs);
    return 1;
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