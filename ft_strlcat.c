/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:29:47 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/25 11:51:53 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dst || !src)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while ((dlen + i) < (size - 1) && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*int	main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";
	size_t	result;

	result = ft_strlcat(dest, src, sizeof(dest));
	printf("Concatenated string: %s\n", dest);
	printf("Total length: %zu\n", result);

	return (0);
}*/
