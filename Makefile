# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by juligonz          #+#    #+#              #
#    Updated: 2019/10/15 13:51:34 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a

PART1 		=	ft_memset.c				\
				ft_bzero.c				\
				ft_memcpy.c				\
				ft_memccpy.c			\
				ft_memmove.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_strlen.c				\
				ft_isalpha.c			\
				ft_isdigit.c			\
				ft_isalnum.c			\
				ft_isascii.c			\
				ft_isprint.c			\
				ft_toupper.c			\
				ft_tolower.c			\
				ft_strchr.c				\
				ft_strrchr.c			\
				ft_strncmp.c			\
				ft_strlcpy.c			\
				ft_strlcat.c			\
				ft_strnstr.c			\
				ft_atoi.c				\
				ft_calloc.c				\
				ft_strdup.c				\

PART2		=	ft_substr.c				\
				ft_strjoin.c			\
				ft_strtrim.c			\
				ft_split.c				\
				ft_itoa.c				\
				ft_strmapi.c			\
				ft_putchar_fd.c			\
				ft_putstr_fd.c			\
				ft_putendl_fd.c			\
				ft_putnbr_fd.c			\

BONUS		=	ft_lstnew_bonus.c		\
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c		\

SRCS		=	$(PART1) $(PART2)
SRCS_BONUS	=	$(BONUS)

OBJ			=	$(SRCS:.c=.o)
OBJ_BONUS	=	$(SRCS_BONUS:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror -I./

all:			$(NAME)

bonus:			$(OBJ) $(OBJ_BONUS)
				ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
				ranlib $(NAME)

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
				rm -f $(OBJ) $(OBJ_BONUS)

fclean:			clean
				rm -f $(NAME) $(NAME_BONUS)

re:				fclean all bonus

.PHONY:			clean fclean re all bonus