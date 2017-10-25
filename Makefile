# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 20:20:19 by emmmhla           #+#    #+#              #
#    Updated: 2016/07/17 18:18:25 by emmmhla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select

HEADERS = -I include

SRCS = \
	srcs/ft_select.c srcs/ft_put_char.c srcs/ft_put_cyan.c srcs/ft_put_endl.c \
	srcs/ft_put_highlight.c srcs/ft_put_magneta.c srcs/ft_put_str.c \
	srcs/ft_put_underline.c srcs/ft_put_underline_highlight.c \
	srcs/ft_change_term_behavior.c srcs/ft_save_and_load.c \
	srcs/ft_clear_terminal.c srcs/ft_handle_signals.c \
	srcs/ft_reset_term_behavior.c srcs/ft_keyhook.c srcs/ft_exit.c \
	srcs/ft_add_list.c srcs/ft_free_mem.c srcs/ft_print_list.c \
	srcs/ft_strdup.c srcs/ft_go_up.c srcs/ft_go_down.c srcs/ft_select_item.c \
	srcs/ft_enter.c srcs/ft_remove_item.c srcs/ft_win_change.c \
	srcs/ft_get_longest_item.c srcs/ft_put_char_fd.c srcs/ft_put_str_fd.c

LIB = -ltermcap

FLAGS = -Wall -Werror -Wextra

all: author
	@gcc $(FLAGS) $(SRCS) $(HEADERS) $(LIB)
	@mv a.out $(NAME)

clean:
	@rm $(NAME)

fclean: clean
	@rm author

re: clean all

switch: fclean all

author:
	@whoami > author
