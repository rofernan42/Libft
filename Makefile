# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by juligonz          #+#    #+#              #
#    Updated: 2019/11/26 16:09:06 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				=	libft.a

OBJS_PATH			=	./objs

PART1 				=	ft_memset.c				\
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

PART2				=	ft_substr.c				\
						ft_strjoin.c			\
						ft_strtrim.c			\
						ft_split.c				\
						ft_itoa.c				\
						ft_strmapi.c			\
						ft_putchar_fd.c			\
						ft_putstr_fd.c			\
						ft_putendl_fd.c			\
						ft_putnbr_fd.c			\

ADDITIONAL			=	ft_strjoin_free.c		\
						ft_strdel.c				\
						ft_strndup.c			\
						get_next_line.c			\

BONUS				=	ft_lstnew_bonus.c		\
						ft_lstadd_front_bonus.c \
						ft_lstsize_bonus.c		\
						ft_lstlast_bonus.c		\
						ft_lstadd_back_bonus.c	\
						ft_lstdelone_bonus.c	\
						ft_lstclear_bonus.c		\
						ft_lstiter_bonus.c		\
						ft_lstmap_bonus.c		\

SRCS				=	$(PART1) $(PART2) $(ADDITIONAL)
SRCS_BONUS			=	$(BONUS)

OBJS_NAME			=	$(SRCS:.c=.o)
OBJS_N_BONUS		=	$(SRCS_BONUS:.c=.o)

OBJS				=	$(addprefix $(OBJS_PATH)/, $(OBJS_NAME))
OBJS_BONUS			=	$(addprefix $(OBJS_PATH)/, $(OBJS_N_BONUS))

CC					=	gcc

CFLAGS				=	-Wall -Wextra -Werror -I./

all:					$(NAME)

bonus:					$(OBJS) $(OBJS_BONUS)
						ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
						ranlib $(NAME)

$(NAME):				$(OBJS)
						ar rc $(NAME) $(OBJS)
						ranlib $(NAME)

$(OBJS_PATH)/%.o:		./%.c
						@mkdir $(OBJS_PATH) 2> /dev/null || true
						@$(CC) -o $@ -c $<

clean:
						rm -rf $(OBJS) $(OBJS_BONUS)

fclean:					clean
						rm -rf ./objs $(NAME)

re:						fclean all

.PHONY:					clean fclean re all bonus