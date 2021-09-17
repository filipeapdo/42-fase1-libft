# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 22:54:20 by fiaparec          #+#    #+#              #
#    Updated: 2021/09/17 08:02:22 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= clang
FLAG			= -Wall -Wextra -Werror

AR				= ar rc

RM				= rm -f

NORM			= norminette

NAME			= libft.a
HEADERS			= libft.h
SRCS			= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				  ft_toupper.c ft_tolower.c \
				  ft_atoi.c ft_strlen.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
				  ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
				  ft_itoa.c ft_strdup.c ft_substr.c ft_strtrim.c \
				  ft_strjoin.c ft_split.c ft_strmapi.c ft_striteri.c \
				  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				  ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
				  ft_memcmp.c ft_memchr.c ft_calloc.c

OBJS			= $(SRCS:.c=.o)

.c.o:
				$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) *.out
				$(RM) *.a

re:				fclean all

norm:
				$(NORM) $(HEADERS) $(SRCS)

.PHONY:			all clean fclean re norm
