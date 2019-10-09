/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:55:58 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/09 12:52:57 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_c(char to_check, char c)
{
	if (to_check == c)
		return (1);
	return (0);
}

int		new_block(char prev, char curr, char c)
{
	if (check_c(prev, c) && !check_c(curr, c))
		return (1);
	return (0);
}

int		nb_blocks(char const *s, char c)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && !check_c(s[0], c)) || new_block(s[i - 1], s[i], c))
			nb++;
		i++;
	}
	return (nb);
}

int		*size_blocks(char const *s, char c)
{
	int *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(*tab) * (nb_blocks(s, c)))))
		return (0);
	while (i < nb_blocks(s, c))
		tab[i++] = 0;
	i = 0;
	while (s[i])
	{
		if (!check_c(s[i], c))
			tab[j]++;
		else if (i > 0 && !check_c(s[i - 1], c))
			j++;
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	if (!(dest = malloc(sizeof(dest) * (nb_blocks(s, c) + 1))))
		return (0);
	while (j < nb_blocks(s, c))
	{
		k = 0;
		while (check_c(s[i], c))
			i++;
		if (!(dest[j] = malloc(sizeof(*dest) * (size_blocks(s, c)[j] + 1))))
			return (0);
		while (k < size_blocks(s, c)[j])
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
}
