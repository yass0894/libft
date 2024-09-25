/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:29:19 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:29:31 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcat(str, s2, len1 + len2 + 1);
	return (str);
}
/*int main(void)
{
    char *s1 = "Hola";
    char *s2 = "mundo!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Resultado: %s\n", result);
        free(result);  // Liberar la memoria que fue asignada con malloc
    }
    else
    {
        printf("Error al unir las cadenas.\n");
    }

    return 0;
}*/
