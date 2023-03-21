/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:39:24 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 10:47:49 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*sub;

	sub_len = ft_strlen(s);
	if (sub_len <= start)
		sub_len = 0;
	else
		sub_len -= start;
	if (sub_len > len)
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (sub == NULL)
		return (NULL);
	sub[sub_len] = '\0';
	while (sub_len > 0)
	{
		sub_len--;
		sub[sub_len] = s[start + sub_len];
	}
	return (sub);
}
