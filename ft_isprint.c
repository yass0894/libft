/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:26:19 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:26:22 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
    char c1 = 'A';
    char c2 = ' ';


printf("%d\n", ft_isprint(c1));
printf("%d\n", ft_isprint(c2));
return 0;
}*/