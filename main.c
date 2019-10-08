/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:50 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/08 19:00:06 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int	check_c(char to_check, char c);
int	new_block(char prev, char curr, char c);
int	nb_blocks(char const *s, char c);
int	*size_blocks(char const *s, char c);
char **ft_split(char const *s, char c);

int		main(int argc, char **argv)
{
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
	int i = 0;
	printf("nb blocks: %d\n", nb_blocks(argv[1], argv[2][0]));
	while (i < nb_blocks(argv[1], argv[2][0]))
	{
		printf("%d\n", size_blocks(argv[1], argv[2][0])[i]);
		i++;
	}
	i = 0;
	while (i < nb_blocks(argv[1], argv[2][0]))
	{
		printf("%s\n", ft_split(argv[1], argv[2][0])[i]);
		i++;
	}
	return (0);
}
