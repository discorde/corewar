#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:57:40 by lcaminon          #+#    #+#              #
#    Updated: 2014/01/11 19:05:14 by lcaminon         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =			libft.a

SRCDIR =		src

SRC =			ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_lstadd.c \
				ft_lstdel.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memrchr.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strsplit.c \
				ft_strsplitstr.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_tolower.c \
				ft_toupper.c \
				get_delim.c \
				get_next_line.c

OBJDIR =		obj

OBJ = 			$(SRC:%.c=%.o)

OBJ_LIST =		$(addprefix $(OBJDIR)/, $(OBJ))

CC = 			gcc

RM = 			rm -f

CFLAGS +=		-Wall -Wextra -Werror -I./include

all: 			$(NAME)

$(NAME): 		$(OBJ_LIST)
				@ar -r $(NAME) $(OBJ_LIST)
				@ranlib $(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
				@$(CC) -o $@ -c $< $(CFLAGS)

clean:
				@$(RM) $(OBJ_LIST)

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY:			all clean fclean re
