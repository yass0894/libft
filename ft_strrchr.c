/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:31:29 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 12:35:31 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main() {
    const char str[] = "Hello, World!";
    char ch = 'o';
    
    char *result = ft_strrchr(str, ch);
    
    if (result)
        printf("Última aparición de '%c' está en: %s\n", ch, result);
    else
        printf("El carácter '%c' no se encontró.\n", ch);
    
    return 0;
}*/
