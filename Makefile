# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnegre <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 10:54:52 by pnegre            #+#    #+#              #
#    Updated: 2023/02/15 10:55:11 by pnegre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=		ft_isalnum.c ft_isprint.c  \
					ft_strlcat.c ft_strncmp.c  ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_strlcpy.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c  ft_strlen.c \
					ft_toupper.c  ft_isdigit.c ft_memset.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
