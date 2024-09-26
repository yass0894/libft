/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:12:09 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 18:08:34 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*char    to_uppercase(unsigned int index, char c)
{
    (void)index; // El índice no se usa, por lo que se evita el warning
    if (c >= 'a' && c <= 'z')
        return (c - 32); // Convierte a mayúscula restando 32 en ASCII
    return (c); // Si no es minúscula, devuelve el carácter sin cambios
}

int main(void)
{
    char    *str = "hola, mundo!";
    char    *result;

    // Usamos ft_strmapi para aplicar la función to_uppercase
    result = ft_strmapi(str, to_uppercase);

    // Verificamos si malloc falló
    if (result == NULL)
    {
        printf("Error en la reserva de memoria\n");
        return (1);
    }

    // Imprimir el resultado
    printf("Cadena original: %s\n", str);
    printf("Cadena modificada: %s\n", result);

    // Liberar la memoria asignada
    free(result);

    return (0);
}*/
