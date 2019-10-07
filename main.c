/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:50 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/07 16:30:40 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);

int		main(int argc, char **argv)
{
	printf("atoi:    %d\n", atoi(argv[1]));
	printf("ft_atoi: %d\n\n", ft_atoi(argv[1]));
	printf("isalpha:    %d\n", isalpha(argv[1][0]));
	printf("ft_isalpha: %d\n\n", ft_isalpha(argv[1][0]));
	printf("isdigit:    %d\n", isdigit(argv[1][0]));
	printf("ft_isdigit: %d\n\n", ft_isdigit(argv[1][0]));
	printf("isalnum:    %d\n", isalnum(argv[1][0]));
	printf("ft_isalnum: %d\n\n", ft_isalnum(argv[1][0]));
	printf("isascii:    %d\n", isascii(argv[1][0]));
	printf("ft_isascii: %d\n\n", ft_isascii(argv[1][0]));
	printf("isprint:    %d\n", isprint(argv[1][0]));
	printf("ft_isprint: %d\n\n", ft_isprint(argv[1][0]));
	printf("toupper:    %c\n", toupper(argv[1][0]));
	printf("ft_toupper: %c\n\n", ft_toupper(argv[1][0]));
	return (0);
}
