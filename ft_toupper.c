/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:32:14 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:32:17 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
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
        str[i] = ft_toupper(str[i]);
        i++;
}

    printf("Cadena convertida a mayúsculas: %s\n", str);

    return 0;
}*/
