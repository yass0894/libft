/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:32:02 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:32:04 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int main() 
{
    char str[] = "Hola Mundo! 123 abc";
    int i; 
	i = 0;


    printf("Cadena original: %s\n", str);

    while (str[i] != '\0') 
{
        str[i] = ft_tolower(str[i]);
        i++;
}

    printf("Cadena convertida a mayúsculas: %s\n", str);

    return 0;
}*/
