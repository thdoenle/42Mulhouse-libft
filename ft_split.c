/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:13:35 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 15:46:07 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_split_nb_words(char const *s, char c)
{
	size_t	nb;

	nb = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			nb++;
		while (*s && *s != c)
			s++;
	}
	return (nb);
}

static char	*ft_split_wordcpy(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(i + 1);
	if (word == NULL)
		return (NULL);
	word[i] = '\0';
	while (i > 0)
	{
		i--;
		word[i] = s[i];
	}
	return (word);
}

static char	**ft_split_free(char **ptr, char **start)
{
	while (ptr != start)
	{
		ptr--;
		free(*ptr);
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**tab_ptr;

	tab = malloc((ft_split_nb_words(s, c) + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	tab_ptr = tab;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*tab_ptr = ft_split_wordcpy(s, c);
			if (*tab_ptr == NULL)
				return (ft_split_free(tab_ptr, tab));
			tab_ptr++;
			while (*s && *s != c)
				s++;
		}
	}
	*tab_ptr = NULL;
	return (tab);
}
