/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:01:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/08 17:17:36 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *temp1;
	char *temp2;

	temp1 = (char *)s1;
	temp2 = (char *)s2;
	if (n == 0)
		return (0);
	while (*temp1 && *temp2 && *temp1 == *temp2 && n > 1)
	{
		temp1++;
		temp2++;
		n--;
	}
	return (*temp1 - *temp2);
}
