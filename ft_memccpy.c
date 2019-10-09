/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:25:49 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/09 16:39:00 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*temp_dst;
	char	*temp_src;

	i = 0;
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		if (temp_src[i] == c)
		{
			temp_dst[i] = temp_src[i];
			return (&temp_dst[i + 1]);
		}
		i++;
	}
	return (0);
}
