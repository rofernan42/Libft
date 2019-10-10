/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:58:34 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/10 18:32:19 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new_lst;
	t_list *tmp;
	t_list *tmp_new;

	tmp = lst;
	tmp = f(tmp->content);
	new_lst = ft_lstnew(tmp->content);
	while (tmp)
	{
		tmp = tmp->next;
		tmp = f(tmp->content);
		new_lst = ft_lstnew(tmp->content);
		tmp_new = tmp_new->next;
	}
	return (new_lst);
}
