/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:20 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/04 09:54:13 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	add;

	if (dst == NULL && src == NULL)
		return (NULL);
	add = 1;
	i = 0;
	if (dst > src && len > 0)
	{
		add = -1;
		i = len - 1;
	}
	while (len > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i += add;
		len--;
	}
	return (dst);
}
