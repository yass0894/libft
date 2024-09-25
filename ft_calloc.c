/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:24:21 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 13:15:10 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*int main() 
{
    int n = 5; // Número de elementos
    int *array = (int*) ft_calloc(n, sizeof(int));

    // Verificar la asignación
    if (!array) {
        fprintf(stderr, "Error: no se pudo asignar memoria\n");
        return EXIT_FAILURE;
    }

    // Imprimir los valores del array
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Liberar la memoria
    free(array);

    return EXIT_SUCCESS;
}*/
