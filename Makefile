# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 13:00:10 by lpetsoan          #+#    #+#              #
#    Updated: 2020/01/08 15:19:31 by lpetsoan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = ftprintf.a

SRC =	ft_printf.c\
		get_precision.c\
		get_flags.c\
		field_width.c\
		print_ints.c\
		print_strings.c\
		print_conv.c\
		print_decimal.c\
		utils.c\
		process_spec.c\



OBJ = $(SRC:.c=.o)

all: $(NAME)
	./build.sh

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
