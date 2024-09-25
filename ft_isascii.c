/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:25:32 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:25:37 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
    char c1 = '8';
    char c2 = ' ';


printf("%d\n", ft_isprint(c1));
printf("%d\n", ft_isprint(c2));
return 0;
}*/
