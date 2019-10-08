/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:38:32 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/08 17:00:17 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (temp[i] && i < n)
	{
		if (temp[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
