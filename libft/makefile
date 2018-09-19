# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/24 13:20:51 by prossi            #+#    #+#              #
#    Updated: 2017/09/06 15:04:49 by prossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libft.a

SRC_PATH_OFF = src/off_libft

SRC_PATH_PIMP = src/pimp_libft

SRC_PATH_GRAPH = src/graph_libft

SRC_NAME_OFF = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
			   ft_strncat.c ft_putchar.c ft_putchar_fd.c ft_putstr.c \
			   ft_putstr_fd.c ft_memset.c ft_bzero.c ft_memcpy.c \
			   ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
			   ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
			   ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
			   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			   ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c \
			   ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
			   ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
			   ft_strnequ.c ft_strsub.c ft_strjoin.c ft_putendl.c \
			   ft_strtrim.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
			   ft_itoa.c ft_lenint.c ft_strputneg.c ft_strsplit.c \
			   ft_countw.c ft_strlcat.c ft_isupper.c ft_islower.c \
			   ft_isblank.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
			   ft_lstadd.c ft_lstiter.c ft_lstmap.c

SRC_NAME_PIMP = ft_openfile.c ft_readfile.c ft_closefile.c get_next_line.c \
				ft_realloc_free.c ft_strjoin_free.c ft_tabint.c

SRC_NAME_GRAPH =

OBJ_PATH_OFF = obj/

OBJ_PATH_PIMP = obj/

OBJ_PATH_GRAPH = obj/

CPPFLAGS_OFF = include/off_libft/

CPPFLAGS_PIMP = include/pimp_libft/

CPPFLAGS_GRAPH = include/graph_libft/

CC = clang

CFLAGS = -Werror -Wall -Wextra

OBJ_NAME_OFF = $(SRC_NAME_OFF:.c=.o)

OBJ_NAME_PIMP = $(SRC_NAME_PIMP:.c=.o)

OBJ_NAME_GRAPH = $(SRC_NAME_GRAPH:.c=.0)

SRC_OFF = $(addprefix $(SRC_PATH_OFF)/,$(SRC_NAME_OFF))

SRC_PIMP = $(addprefix $(SRC_PATH_PIMP)/,$(SRC_NAME_PIMP))

SRC_GRAPH = $(addprefix $(SRC_PATH_GRAPH)/,$(SRC_NAME_GRAPH))

OBJ_OFF = $(addprefix $(OBJ_PATH_OFF),$(OBJ_NAME_OFF))

OBJ_PIMP = $(addprefix $(OBJ_PATH_PIMP),$(OBJ_NAME_PIMP))

OBJ_GRAPH = $(addprefix $(OBJ_PATH_GRAPH),$(OBJ_NAME_GRAPH))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(CPPFLAGS_OFF) -I $(CPPFLAGS_PIMP) -I $(CPPFLAGS_GRAPH) -c $(SRC_OFF) $(SRC_PIMP) $(SRC_GRAPH)
	mkdir obj
	mv *.o obj/
	ar rc $(NAME) $(OBJ_PIMP) $(OBJ_OFF) $(OBJ_GRAPH)
	ranlib $(NAME)

clean:
	rm -rf obj/

fclean: clean
	rm -fv $(NAME)

re: fclean all
