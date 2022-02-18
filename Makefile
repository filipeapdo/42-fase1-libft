# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 22:54:20 by fiaparec          #+#    #+#              #
#    Updated: 2022/02/17 20:56:21 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc

FLAG			= -Wall -Wextra -Werror
LIB_FLAG		= -L. -lft

AR				= ar rc

RM				= rm -f

NORM			= norminette

HEADERS			= src/libft.h

ALL_SRCS		:= $(wildcard src/char/*.c) \
					$(wildcard src/fd/*.c) \
					$(wildcard src/mem/*.c) \
					$(wildcard src/str/*.c)
SRCS			:= $(filter-out %test.c, $(ALL_SRCS))
TSRCS			:= $(filter %test.c, $(ALL_SRCS)) \
					src/main_test.c

OBJS			= $(SRCS:.c=.o)
TOBJS			= $(TSRCS:.c=.o)

NAME			= libft.a
TNAME			= main_test.out

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
				$(RM) *.a

re:				fclean all

norm:
				$(NORM) $(HEADERS) $(SRCS)

$(TNAME):		$(TOBJS)
				$(CC) $(FLAG) $(TSRCS) $(LIB_FLAG) -o $(TNAME)

test:			$(TNAME)

.PHONY:			all clean fclean re norm test
