/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:39 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 12:11:25 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ca;

	i = 0;
	ca = (char) c;
	while (s[i])
	{
		if (s[i] == ca)
			return ((char *) &s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main(void)
{
    const char str[] = "Hola, mundo";
    char ch = 'o';
    char *result = ft_strchr(str, ch);

    if (result != NULL)
        printf("El carácter '%c' se encontró en: %s\n", ch, result);
    else
        printf("El carácter '%c' no se encontró.\n", ch);

    return 0;
}*/
