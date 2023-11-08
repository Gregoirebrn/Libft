# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 16:45:45 by grebrune          #+#    #+#              #
#    Updated: 2023/11/08 14:37:48 by grebrune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:=	\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\


OBJS		:=	$(SRCS:%.c=%.o)

HEAD		:=	libft.h

CFLAGS		:=	-Wall -Wextra -Werror -g3 #-fsanitize=address

AR			:=	ar rcs #verifier si s autorise

NAME		:=	libft.a

all			:	$(NAME)

$(NAME)		:	$(OBJS) Makefile #retirer pour push
				$(AR) $(CLFAGS) -o $(NAME) $(OBJS)

$(OBJS)		:	%.o: $(SRCS_D)%.c $(HEAD)
				$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

clean		:
				$(RM) -r $(OBJ)

fclean		:	clean
				$(RM) $(NAME) $(OBJS)

re			:	fclean all


.PHONY: all clean fclean re
