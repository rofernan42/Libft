/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:25:49 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/08 13:15:52 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (str);
}
