/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:30:16 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 18:11:10 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main(void)
{
    // Prueba enviando el carácter 'A' a la salida estándar (stdout)
    ft_putchar_fd('A', 1);

    // Prueba enviando el carácter 'B' a la salida de errores (stderr)
    ft_putchar_fd('B', 2);

    return 0;
}*/
