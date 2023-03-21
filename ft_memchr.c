/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:22:14 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 19:09:18 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (!n)
		return (NULL);
	while (n > 1 && *ptr != (unsigned char)c)
	{
		n--;
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return ((void *)ptr);
	return (NULL);
}
