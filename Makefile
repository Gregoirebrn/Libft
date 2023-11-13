# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grebrune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 16:45:45 by grebrune          #+#    #+#              #
#    Updated: 2023/11/10 14:22:01 by grebrune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:=	\
				ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c\

SRC_B		:=	\
				ft_lstnew\
				ft_lstadd_front\
				ft_lstsize\
				ft_lstlast\
				ft_lstdelone\
				ft_lstclear\
				ft_lstiter\
				ft_lstmap\

SRCS_D		:=	#

OBJS_D		:=	#objs/

OBJS		:=	$(SRCS:%.c=$(OBJS_D)%.o)

OBJS_B		:=	$(SRC_B:%.c=$(OBJS_B)%.o)

HEAD		:=	libft.h

HEAD_D		:=	.

CFLAGS		:=	-Wall -Wextra -Werror -g3 #-fsanitize=address

AR			:=	ar rcs #verifier si s autorise

NAME		:=	libft.a

all			:	$(NAME)

bonus		:	$(OBJS_B)
				$(AR) $(CLFAGS) -o $(NAME) $(OBJS)

$(NAME)		:	$(OBJS_D) $(OBJS) Makefile #retirer pour push
				$(AR) $(CLFAGS) -o $(NAME) $(OBJS)

$(OBJS)		:	$(OBJS_D)%.o: $(SRCS_D)%.c $(HEAD)
				$(CC) $(CFLAGS) -I$(HEAD_D) -c $< -o $@
$(OBJS_D)	:
				@mkdir -p $(OBJS_D)

clean		:
				$(RM) -r $(OBJS) $(OBJS_D)

fclean		:	clean
				$(RM) $(NAME) $(OBJS)

re			:	fclean all


.PHONY: all clean fclean re
