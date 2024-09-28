/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:50:13 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/28 12:52:16 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	nlen;

	nlen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nlen++;
	while (n != 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;

	len = ft_nlen(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		len--;
		nbr /= 10;
	}
	return (str);
}
/*int main() {
    int numbers[] = {123, -456, 0, 789, -2147483648};
    char *result;

    for (size_t i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        result = ft_itoa(numbers[i]); // Llama a ft_itoa para convertir el número
        if (result) {
printf("El número %d se convierte a la cadena: %s\n", numbers[i], result);
        free(result); // Libera la memoria asignada por ft_itoa
        } else {
            printf("Error al convertir el número %d\n", numbers[i]);
        }
    }

    return 0;
}*/
