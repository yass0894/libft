/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:26:52 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 12:54:13 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s)[j] == (unsigned char)c)
			return (&((unsigned char *)s)[j]);
		else
			j++;
	}
	return (NULL);
}
/*int main() {
    char arr[] = "Hello, world!";
    char *result = ft_memchr(arr, 'e', strlen(arr));

    if (result != NULL) {
        printf("Encontrado el carácter 'e' en la posición: %ld\n", result - arr);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
