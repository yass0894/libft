/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:23:44 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 10:23:52 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)

{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign = -sign;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
/*int main(void)
{
    // Pruebas de ft_atoi
    const char *str1 = "   1234";
    const char *str2 = "-5678";
    const char *str3 = "+9876";
    const char *str4 = "  42abc";
    const char *str5 = "abc123";

    printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
    printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
    printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
    printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));
    printf("ft_atoi(\"%s\") = %d\n", str5, ft_atoi(str5));

    return 0;
}*/
