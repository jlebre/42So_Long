/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:16:42 by jlebre            #+#    #+#             */
/*   Updated: 2021/12/13 13:17:55 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*i;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	i = new_lst;
	lst = lst->next;
	while (lst && i)
	{
		i->next = ft_lstnew(f(lst->content));
		if (!i->next)
			ft_lstclear(&i, del);
		lst = lst->next;
		i = i->next;
	}
	return (new_lst);
}
