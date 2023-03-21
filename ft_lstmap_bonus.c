/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:38:56 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/29 14:47:16 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	**ptr;
	t_list	*new_content;

	new = NULL;
	ptr = &new;
	while (lst)
	{
		new_content = (*f)(lst->content);
		*ptr = ft_lstnew(new_content);
		if (*ptr == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ptr = &((*ptr)->next);
		lst = lst->next;
	}
	return (new);
}
