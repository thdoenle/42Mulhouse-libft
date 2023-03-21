/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:46 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 18:51:41 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;

	str = malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	*ptr = '\0';
	return (str);
}
