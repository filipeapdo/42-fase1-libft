# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 22:54:20 by fiaparec          #+#    #+#              #
#    Updated: 2021/09/11 16:25:35 by fiaparec         ###   ########.fr        #
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
				$(RM) *.a
				$(RM) *.so

re:				fclean all

norm:
				$(NORM) $(HEADERS) $(SRCS)

so:
				$(CC) -nostartfiles -fPIC $(FLAG) $(SRCS)
				gcc -shared -o libft.so $(OBJS)

$(TNAME):		$(TOBJS)
				$(CC) $(FLAG) $(TSRCS) $(LIB_FLAG) -o $(TNAME)

test:			$(TNAME)

.PHONY:			all clean fclean re norm so test
