/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:26:02 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 13:56:21 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else	
		return (0);
}

/*int main()
{
    char c1 = '8';
    char c2 = 'b';


printf("%d\n", ft_isdigit(c1));
printf("%d\n", ft_isdigit(c2));
return 0;
}*/
