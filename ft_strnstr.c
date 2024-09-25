/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:31:10 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 12:58:14 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little [j] && big [i + j] == little[j] && (i + j) < len)
				j++;
			if (little [j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
    const char *big = "hello world";
    const char *little = "world";
    size_t len = 10;
    char *result;

    // Llamada a ft_strnstr
    result = ft_strnstr(big, little, len);

    // Imprimir el resultado
    if (result != NULL)
    {
        printf("Encontrado: %s\n", result);
    }
    else
    {
        printf("No encontrado.\n");
    }

    return 0;
}*/
