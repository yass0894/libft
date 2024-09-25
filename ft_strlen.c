/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:30:32 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:30:35 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*int main()
{
    const char *cadena = "Hola Mundo";

    size_t longitud_nuestra = ft_strlen(cadena);
     printf("La longitud de la cadena \"%s\" usando 
	ft_strlen es: %zu\n"cadena, longitud_nuestra);
 return 0;
}*/
