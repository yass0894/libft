/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:18 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:27:21 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "Hola";
    char str2[] = "Holz";
    
    int result = ft_memcmp(str1, str2, 4);
    
    if (result == 0)
        printf("Los bloques son iguales.\n");
    else if (result < 0)
        printf("El primer bloque es menor.\n");
    else
        printf("El primer bloque es mayor.\n");

    return 0;
}*/
