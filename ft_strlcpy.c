/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:25:40 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/01 12:07:48 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	i = 0;
	while (dstsize && i < s_len + 1)
	{
		dst[i] = src[i];
		dstsize--;
		if (dstsize == 0)
			dst[i] = 0;
		i++;
	}
	return (s_len);
}
