/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:30:09 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 11:42:29 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	if (!dst || !src)
		return (0);
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*int main()
{
    char dest[10]; 
    const char *src = "Hello, Mundo!"; 

    size_t copied_len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Cadena copiada: %s\n", dest);
    printf("Longitud de la cadena fuente: %zu\n", copied_len);

    return 0;
}*/
