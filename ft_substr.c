/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:31:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/14 17:55:18 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	ft_bzero(str, len + 1);
	if (start >= ft_strlen(s))
		return ("\0");
	while (i < len && s[start])
		str[i++] = s[start++];
	return (str);
}
