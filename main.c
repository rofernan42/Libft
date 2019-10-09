/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:50 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/09 18:09:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>



int	check_c(char to_check, char c);
int	new_block(char prev, char curr, char c);
int	nb_blocks(char const *s, char c);
int	*size_blocks(char const *s, char c);

int	size_str(int n);
char	*fill_str(int n, int len, char *str);


int		main(int argc, char **argv)
{
	(void)argc;

	// printf("atoi:    %d\n", atoi(argv[1]));
	// printf("ft_atoi: %d\n\n", ft_atoi(argv[1]));

	// printf("isalpha:    %d\n", isalpha(argv[1][0]));
	// printf("ft_isalpha: %d\n\n", ft_isalpha(argv[1][0]));

	// printf("isdigit:    %d\n", isdigit(argv[1][0]));
	// printf("ft_isdigit: %d\n\n", ft_isdigit(argv[1][0]));

	// printf("isalnum:    %d\n", isalnum(argv[1][0]));
	// printf("ft_isalnum: %d\n\n", ft_isalnum(argv[1][0]));

	// printf("isascii:    %d\n", isascii(argv[1][0]));
	// printf("ft_isascii: %d\n\n", ft_isascii(argv[1][0]));

	// printf("isprint:    %d\n", isprint(argv[1][0]));
	// printf("ft_isprint: %d\n\n", ft_isprint(argv[1][0]));

	// printf("toupper:    %c\n", toupper(argv[1][0]));
	// printf("ft_toupper: %c\n\n", ft_toupper(argv[1][0]));

	// printf("tolower:    %c\n", tolower(argv[1][0]));
	// printf("ft_tolower: %c\n\n", ft_tolower(argv[1][0]));

	// printf("strchr:    %s\n", strchr(argv[1], argv[2][0]));
	// printf("ft_strchr: %s\n\n", ft_strchr(argv[1], argv[2][0]));

	// printf("strrchr:    %s\n", strrchr(argv[1], argv[2][0]));
	// printf("ft_strrchr: %s\n\n", ft_strrchr(argv[1], argv[2][0]));

	// printf("strncmp:    %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	// printf("ft_strncmp: %d\n\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

	// printf("strlcpy:    %lu\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
	// printf("ft_strlcpy: %lu\n\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));

	// printf("strlcat:    %lu\n", strlcat(argv[1], argv[2], atoi(argv[3])));
	// printf("ft_strlcat: %lu\n\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));

	// printf("memset:    %s\n", memset(argv[1], argv[2][0], atoi(argv[3])));
	// printf("ft_memset: %s\n\n", ft_memset(argv[1], argv[2][0], atoi(argv[3])));

	// char test[10] = "salut";
	// printf("bzero:    '%s'\n", test);
	// ft_bzero(test, atoi(argv[2]));
	// printf("bzero:    '%s'\n\n", test);

	// printf("strnstr:    %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	// printf("ft_strnstr: %s\n\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));

//	printf("memcpy:    %s\n", memcpy(argv[1], argv[2], atoi(argv[3])));
//	printf("ft_memcpy: %s\n\n", ft_memcpy(argv[1], argv[2], atoi(argv[3])));

	// printf("memccpy:    %s\n", memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));
	// printf("%s\n\n", argv[1]);
	// printf("ft_memccpy: %s\n", ft_memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));
	// printf("%s\n\n", argv[1]);


//	printf("memmove:    %s\n", memmove(argv[1], argv[2], atoi(argv[3])));
//	printf("ft_memmove: %s\n\n", ft_memmove(argv[1], argv[2], atoi(argv[3])));

	// printf("memchr:    %s\n", memchr(argv[1], argv[2][0], atoi(argv[3])));
	// printf("ft_memchr: %s\n\n", ft_memchr(argv[1], argv[2][0], atoi(argv[3])));

	// printf("memcmp:    %d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
	// printf("ft_memcmp: %d\n\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));

	// ft_putstr_fd(argv[1], atoi(argv[2]));
	// printf("\n");
	// ft_putendl_fd(argv[1], atoi(argv[2]));
	// ft_putendl_fd(argv[1], atoi(argv[2]));
	// ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	// int i = 0;
	// printf("nb blocks: %d\n", nb_blocks(argv[1], argv[2][0]));
	// while (i < nb_blocks(argv[1], argv[2][0]))
	// {
	// 	printf("%d\n", size_blocks(argv[1], argv[2][0])[i]);
	// 	i++;
	// }
	// i = 0;
	// while (ft_split(argv[1], argv[2][0])[i])
	// {
	// 	printf("%s\n", ft_split(argv[1], argv[2][0])[i]);
	// 	i++;
	// }
	// printf("%s\n", ft_split(argv[1], argv[2][0])[i]);

	// printf("%s\n\n", ft_itoa(atoi(argv[1])));

	printf("ft_strtrim:    %s\n", ft_strtrim(argv[1], argv[2]));

	return (0);
}
