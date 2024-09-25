/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:24:02 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:41:07 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*int main() 
{
    char str[] = "Hola, Mundo!";
    printf("Antes de ft_bzero: %s\n", str);
    ft_bzero(str, 5);
    printf("Después de ft_bzero: %s\n", str);
return 0;
}*/
