/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:38:32 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/11 11:52:48 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)str;
	while (temp[i] && i < n)
	{
		if (temp[i] == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	if (c == 0)
		return ((unsigned char *)&str[i]);
	return (0);
}
