/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:31:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/10 12:54:17 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = start;
	if (!(str = malloc(sizeof(char *) * (len + 1))) || start > ft_strlen(s))
		return (NULL);
	while (i < len && s[j])
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
