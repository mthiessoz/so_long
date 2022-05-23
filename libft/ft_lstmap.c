/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:39:11 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/18 19:53:32 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*newlst;

	if (!lst)
		return (0);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
	{
		ft_lstclear(&newlst, del);
		return (0);
	}
	tmp = newlst;
	while (lst->next)
	{
		lst = lst->next;
		newlst->next = ft_lstnew(f(lst->content));
		if (!newlst->next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		newlst = newlst->next;
	}
	return (tmp);
}
