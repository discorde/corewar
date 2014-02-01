#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:57:40 by lcaminon          #+#    #+#              #
#    Updated: 2014/02/01 15:59:52 by lcaminon         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME_ASM =			asm

NAME_VM =			corewar

DIR_SRC =			src

DIR_ASM =			src_asm

DIR_VM =			src_vm

SRC =				endian_utils.c

SRC_ASM =			main.c

SRC_VM =			main.c

DIR_OBJ =			obj

DIR_OBJ_ASM =		obj_asm

DIR_OBJ_VM =		obj_vm

OBJ = 				$(SRC:%.c=%.o)

OBJ_ASM =			$(SRC_ASM:%.c=%.o)

OBJ_VM =			$(SRC_VM:%.c=%.o)

OBJ_LIST =			$(addprefix $(DIR_OBJ)/, $(OBJ))

OBJ_LIST_ASM =		$(addprefix $(DIR_OBJ_ASM)/, $(OBJ_ASM)) 

OBJ_LIST_VM =		$(addprefix $(DIR_OBJ_VM)/, $(OBJ_VM)) 

CC = 				gcc

RM = 				rm -f

INCLUDE =			-I./include -I./libft/include

LIBFTPATH =			./libft

LIBPATH =			-L$(LIBFTPATH)

LIB =				-lft

CFLAGS +=			-Wall -Wextra -Werror $(INCLUDE)

all: 				$(NAME_ASM) $(NAME_VM)

$(NAME_ASM): 		$(OBJ_LIST) $(OBJ_LIST_ASM)
					@make -C $(LIBFTPATH)
					@$(CC) $(CFLAGS) -o $(NAME_ASM) $(OBJ_LIST) \
					$(OBJ_LIST_ASM) $(LIBPATH) $(LIB)

$(NAME_VM): 		$(OBJ_LIST) $(OBJ_LIST_VM)
					@make -C $(LIBFTPATH)
					@$(CC) $(CFLAGS) -o $(NAME_VM) $(OBJ_LIST) \
					$(OBJ_LIST_VM) $(LIBPATH) $(LIB)

$(DIR_OBJ)/%.o:		$(DIR_SRC)/%.c
					@$(CC) $(CFLAGS) -o $@ -c $<

$(DIR_OBJ_ASM)/%.o:	$(DIR_ASM)/%.c
					@$(CC) $(CFLAGS) -o $@ -c $<

$(DIR_OBJ_VM)/%.o:	$(DIR_VM)/%.c
					@$(CC) $(CFLAGS) -o $@ -c $<

clean:
					@make clean -C $(LIBFTPATH)
					@$(RM) $(OBJ_LIST)

fclean: 			clean
					@make fclean -C $(LIBFTPATH)
					@$(RM) $(NAME)

re: 				fclean all

.PHONY:				all clean fclean re
