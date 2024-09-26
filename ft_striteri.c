/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:14:27 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/26 18:10:27 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void change_to_uppercase(unsigned int i, char *c)
{
    (void)i;
    // Si el carácter es una letra minúscula, lo convertimos a mayúscula.
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - 32;
    }
}

int main(void)
{
    char str[] = "hola, mundo!";

    printf("Antes de ft_striteri: %s\n", str);
    ft_striteri(str, change_to_uppercase);
    printf("Después de ft_striteri: %s\n", str);

    return 0;
}*/
