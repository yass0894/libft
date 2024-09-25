/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:56:47 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 13:43:26 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	str = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], len + 1);
	return (str);
}
/*int main(void)
{
    char *s1;
    char *set;
    char *result;

    // Ejemplo 1: Eliminar espacios en blanco
    s1 = "   hola mundo   ";
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Cadena original: '%s'\n", s1);
    printf("Set: '%s'\n", set);
    printf("Resultado: '%s'\n\n", result);
    free(result); // No olvides liberar la memoria

    // Ejemplo 2: Eliminar múltiples caracteres del principio y final
    s1 = "xx--abc---xx";
    set = "x-";
    result = ft_strtrim(s1, set);
    printf("Cadena original: '%s'\n", s1);
    printf("Set: '%s'\n", set);
    printf("Resultado: '%s'\n\n", result);
    free(result);

    // Ejemplo 3: No eliminar nada
    s1 = "abc";
    set = "xyz";
    result = ft_strtrim(s1, set);
    printf("Cadena original: '%s'\n", s1);
    printf("Set: '%s'\n", set);
    printf("Resultado: '%s'\n\n", result);
    free(result);

    // Ejemplo 4: Eliminar todos los caracteres
    s1 = "abc";
    set = "abc";
    result = ft_strtrim(s1, set);
    printf("Cadena original: '%s'\n", s1);
    printf("Set: '%s'\n", set);
    printf("Resultado: '%s'\n\n", result);
    free(result);

    return (0);
}*/
