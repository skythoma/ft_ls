# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skythoma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/08 14:24:36 by skythoma          #+#    #+#              #
#    Updated: 2019/07/08 14:44:00 by skythoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC =	main.c	flags.c	thedirectory.c	\
		
FLAGS = -Wall -Werror -Wextra

GCC =	gcc

LIBFT = libft\libft.h

all:	$(SRC)

$(SRC):
	@echo "compiling... hold up"
	@make -C $(LIBFT)
	$(GCC) $(FLAGS) $(SRC) -L $(LIBFT) -lft 

clean:
	@echo "cleaning..."
	@rm -rf $(SRC)
	@make fclean -C $(LIBFT)

fclean:	clean
	@echo "clean mo"
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: clean fclean all re