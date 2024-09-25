/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:30:53 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:30:57 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char *str1 = "Hello";
    char *str2 = "Helium";
    int result;

    result = ft_strncmp(str1, str2, 3);
    printf("Resultado: %d\n", result); 

    result = ft_strncmp(str1, str2, 5);
    printf("Resultado: %d\n", result);

    return 0;
}*/
