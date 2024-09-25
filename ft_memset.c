/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:06 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:45:40 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr = (char) c;
		ptr++;
		n--;
	}
	return (s);
}
/*int main() {
    char buffer[50];
    
    // Llenar el buffer con el carácter 'A'
    ft_memset(buffer, 'A', 50);
    
    // Imprimir el contenido del buffer para verificar
    for (int i = 0; i < 50; i++) {
        printf("%c", buffer[i]);
    }
    
    return 0;
}*/
