/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:21 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/28 12:54:05 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	**ft_wordcount_allocat(const char *s, char c)
{
	int		count;
	int		in_word;
	char	**result;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	result = (char **)malloc((count +1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

static char	*ft_word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;
	size_t	len;

	i = 0;
	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
		free(result[i++]);
	free(result);
}

static char	ft_fill_result(char **result, const char *s, char c)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j++] = ft_word_dup(s, start, i);
			if (!result[j - 1])
			{
				ft_free(result, j - 1);
				return (0);
			}
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = ft_wordcount_allocat(s, c);
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, s, c))
		return (NULL);
	return (result);
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
