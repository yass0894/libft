/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:21 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 10:47:26 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_count_substrings(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static	char	**ft_fill_array(char **split_array, const char *s, char c)

{
	int	start;
	int	end;
	int	index;

	start = 0;
	end = 0;
	index = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (s[start])
		{
			end = start;
			while (s[end] && s[end] != c)
				end++;
			split_array[index++] = ft_substr(s, start, end - start);
			start = end;
		}
	}
	split_array[index] = '\0';
	return (split_array);
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_substrings(s, c);
	split_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split_array)
		return (NULL);
	return (ft_fill_array(split_array, s, c));
}
/*int main(void)
{
    char **result;
    char s[] = "hola mundo adios";
    char c = ' ';
    int i = 0;

    // Llamar a ft_split con la cadena y el delimitador
    result = ft_split(s, c);

    // Imprimir cada substring del resultado
    while (result[i])
    {
        printf("Substring %d: %s\n", i, result[i]);
        i++;
    }

    // Liberar la memoria
    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}*/
