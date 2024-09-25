/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:32 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:54:29 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	char		*s;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}
/*int main(void)
{
    char src[20] = "Hola, memcpy!";
    char dest[20];

    ft_memcpy(dest, src, 14);  // Copia 14 bytes desde src a dest

    printf("Fuente (src): %s\n", src);
    printf("Destino (dest): %s\n", dest);

    return 0;
}*/
