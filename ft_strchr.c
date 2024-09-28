/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:39 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/28 12:55:19 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
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
