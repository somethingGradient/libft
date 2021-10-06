# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akitty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 16:58:29 by akitty            #+#    #+#              #
#    Updated: 2021/10/04 16:58:31 by akitty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

all: my

$(NAME):
		gcc $(FLAG) -c *.c
		ar rc $(NAME) *.o

my:
	@gcc ${FLAG} *.c
	@./a.out

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)