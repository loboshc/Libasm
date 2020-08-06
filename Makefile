# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/31 12:53:05 by dlobos-m          #+#    #+#              #
#    Updated: 2020/08/06 10:27:22 by dlobos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_read.s ft_write.s ft_strdup.s

OBJS = $(SRCS:%.s=%.o)
%.o: %.s
	nasm -f macho64 -o $@ $<
	
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm $(OBJS)
fclean: clean
	rm $(NAME)
re: fclean all

.PHONY: all re clean fclean