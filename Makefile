#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:57:40 by lcaminon          #+#    #+#              #
#    Updated: 2014/01/11 21:23:58 by lcaminon         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =			corewar

SRCDIR =		src

SRC =			main.c

OBJDIR =		obj

OBJ = 			$(SRC:%.c=%.o)

OBJ_LIST =		$(addprefix $(OBJDIR)/, $(OBJ))

CC = 			gcc

RM = 			rm -f

INCLUDE =		-I./include -I./libft/include

LIBFTPATH =		./libft

LIBPATH =		-L$(LIBFTPATH)

LIB =			-lft

CFLAGS +=		-Wall -Wextra -Werror $(INCLUDE)

all: 			$(NAME)

$(NAME): 		$(OBJ_LIST)
				@make -C $(LIBFTPATH)
				@$(CC) -o $(NAME) $(OBJ_LIST) $(LIBPATH) $(LIB)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
				@$(CC) -o $@ -c $< $(CFLAGS)

clean:
				@make clean -C $(LIBFTPATH)
				@$(RM) $(OBJ_LIST)

fclean: 		clean
				@make fclean -C $(LIBFTPATH)
				@$(RM) $(NAME)

re: 			fclean all

.PHONY:			all clean fclean re
