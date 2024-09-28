/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:44:59 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 18:28:54 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
/*int main()
{
    int fd = 1; // File descriptor para stdout (salida estándar)

    // Pruebas de la función ft_putnbr_fd
    ft_putnbr_fd(12345, fd); // Envía 12345 a la salida estándar
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(-6789, fd); // Envía -6789 a la salida estándar
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(0, fd); // Envía 0 a la salida estándar
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(-2147483648, fd); // Envía el número más negativo
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(2147483647, fd); // Envía el número más positivo
    write(fd, "\n", 1); // Nueva línea

    return 0;
}*/
