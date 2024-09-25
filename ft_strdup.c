/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:29:03 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:29:08 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int main(void)
{
    char original[] = "Hello, World!";
    char *copy = ft_strdup(original);
    
    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copia: %s\n", copy);
        free(copy);  // No olvides liberar la memoria después de usarla
    }
    else
    {
        printf("No se pudo duplicar la cadena.\n");
    }

    return 0;
}*/
