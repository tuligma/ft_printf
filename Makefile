# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 21:58:13 by npentini          #+#    #+#              #
#    Updated: 2024/05/30 22:03:00 by npentini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_process1.c ft_printf_process2.c ft_printf_utils.c
INCS = .
COMP = cc -c
CFLAGS = -Wall -Wextra -Werror
DELETE = rm -f
LIB_CREATE = ar rcs
RANLIB = ranlib
OBJS = $(SRCS:%.c=%.o)
B_OBJS = $(B_SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(COMP) $(CFLAGS) -I $(INCS) -o $@ $<

$(NAME): $(OBJS)
	$(LIB_CREATE) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

clean:
	$(DELETE) $(OBJS) $(B_OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY: all clean fclean re