/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:48 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 11:16:54 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*ptr_dst;
	char		*ptr_src;
	size_t		i;

	ptr_dst = (char *) dst;
	ptr_src = (char *) src;
	i = 0;
	if (!dst || !src)
		return (NULL);
	else if (dst > src)
		while (i < n--)
			ptr_dst[n] = ptr_src[n];
	else
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
/*int main() {
    char str[] = "Hola mundo";
    
    printf("Cadena original: %s\n", str);

    // Usamos memmove para mover "Hola" dentro de la misma cadena
    ft_memmove(str + 5, str, 4);
    str[9] = '\0';  // Añadimos el carácter nulo al final para terminar la cadena

    printf("Cadena después de memmove: %s\n", str);

    return 0;
}*/
