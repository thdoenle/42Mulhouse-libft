/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:01:48 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/04 15:13:37 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_i;
	size_t	i;

	s_len = ft_strlen(src);
	if (!dstsize)
		return (s_len);
	d_i = 0;
	while (d_i < dstsize && dst[d_i])
		d_i++;
	if (d_i == dstsize)
		return (s_len + dstsize);
	i = d_i;
	while (i < s_len + d_i && i + 1 < dstsize)
	{
		dst[i] = src[i - d_i];
		i++;
	}
	dst[i] = 0;
	return (s_len + d_i);
}
