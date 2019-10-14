/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:25 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/14 16:26:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	i = -1;
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (tmp_src < tmp_dst)
		while ((int)(--n) >= 0)
			*(tmp_dst + n) = *(tmp_src + n);
	else
		while (++i < n)
			*(tmp_dst + i) = *(tmp_src + i);
	return (dst);
}
