/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibrahim <yibrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:31:50 by yibrahim          #+#    #+#             */
/*   Updated: 2024/09/28 12:52:34 by yibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > strlen)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > strlen - start)
		len = strlen - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	substr[len + 1] = '\0';
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
