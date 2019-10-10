/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:09:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/10 12:17:59 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	while (check_set(s1[i], set))
		i++;
	while (s1[i + j])
		j++;
	j--;
	while (check_set(s1[i + j], set))
		j--;
	if (!(str = malloc(sizeof(*str) * j)))
		return (NULL);
	while (k <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
