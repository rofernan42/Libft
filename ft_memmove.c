/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:25 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/08 17:00:25 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*tmp;
	char	*temp_dst;
	char	*temp_src;

	i = 0;
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	while (n > 0)
	{
		tmp[i] = temp_src[i];
		temp_dst[i] = tmp[i];
		i++;
		n--;
	}
	return (dst);
}
