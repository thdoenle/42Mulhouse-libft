/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:55:38 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 19:38:30 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	new = malloc(i + 1);
	if (new == NULL)
		return (NULL);
	new[i] = '\0';
	while (i > 0)
	{
		i--;
		new[i] = s1[i];
	}
	return (new);
}
