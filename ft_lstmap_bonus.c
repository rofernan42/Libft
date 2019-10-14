/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:58:34 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/14 12:59:09 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new_lst;
	t_list *tmp;
	t_list *tmp_new;

	if (!lst)
		return (NULL);
	tmp = lst;
	new_lst = ft_lstnew(f(tmp->content));
	while (tmp)
	{
		tmp = tmp->next;
		new_lst = ft_lstnew(f(tmp->content));
		tmp_new = tmp_new->next;
	}
	return (new_lst);
}
