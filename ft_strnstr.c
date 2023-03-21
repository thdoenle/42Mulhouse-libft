/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:39:48 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 09:40:01 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnstr_is_at(const char *pos, const char *str, size_t len)
{
	while (len > 0 && *str && *str == *pos)
	{
		str++;
		pos++;
		len--;
	}
	if (*str == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (len > 0 && *haystack)
	{
		if (ft_strnstr_is_at(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
