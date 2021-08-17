# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 22:54:20 by fiaparec          #+#    #+#              #
#    Updated: 2021/08/16 22:34:39 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= clang

FLAG			= -Wall -Wextra -Werror

LIB_FLAG		= -L. -lft

AR				= ar rc

RM				= rm -f

NORM			= norminette

HEADERS			= libft.h

SRCS			:= $(wildcard ft_*.c)
TSRCS			:= $(wildcard test_*.c)

OBJS			= $(SRCS:.c=.o)
TOBJS			= $(TSRCS:.c=.o)

NAME			= libft.a
TNAME			= test_libft

.c.o:
				$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)
				$(RM) $(TOBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(TNAME)
				$(RM) *.out

re:				fclean all

norm:
				$(NORM) $(HEADERS) $(SRCS)

$(TNAME):		$(TOBJS)
				$(CC) $(FLAG) $(TSRCS) $(LIB_FLAG) -o $(TNAME)

test:			$(TNAME)

.PHONY:			all clean fclean re norm test
