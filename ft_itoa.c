/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:50:13 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 15:18:45 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long		num;

	len = ft_num_len(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[len--] = '\0';
	while (num > 0)
	{
		str[len] = (num % 10) + '0';
		len--;
		num /= 10;
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
