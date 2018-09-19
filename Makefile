# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 14:28:04 by awk-lm            #+#    #+#              #
#    Updated: 2018/09/19 16:25:58 by awk-lm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=			doom-nukem

#==============================================================================#
#------------------------------------------------------------------------------#
#                               DIRECTORIES                                    #

SRC_DIR			:=			./srcs
INC_DIR			:=			./includes
OBJ_DIR			:=			./obj
LIBFT_DIR		:=			./libft
MLX_DIR			:=			./minilibx

#==============================================================================#
#------------------------------------------------------------------------------#
#                                  FILES                                       #

SRC				:=			main.c

OBJ				:=			$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
NB				:=			$(words $(SRC))
INDEX			:=			0

#==============================================================================#
#------------------------------------------------------------------------------#
#                            COMPILER & FLAGS                                  #

CC				:=			gcc
CFLAGS			:=			-Wall -Wextra -Werror -g3
OFLAGS			:=			-pipe
CFLAGS			+=			$(OFLAGS)
CLIB			:=			-L$(LIBFT_DIR) -lft
MFLAGS			:=			-lm -lmlx -framework OpenGL -framework Appkit
LFLAGS			:=			-lm -lmlx -lXext -lX11 -lssh

#==============================================================================#
#------------------------------------------------------------------------------#
#                                LIBRARY                                       #

L_FT			:=			$(LIBFT_DIR)
MLX				:=			$(MLX_DIR)

#==============================================================================#
#------------------------------------------------------------------------------#
#                                OS CHECKING                                   #

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
MLX_DIR			:=			./minilibx/minilibx_linux
CLIB			:=			-L$(LIBFT_DIR) -lft -g -L$(MLX_DIR) $(LFLAGS)
endif
ifeq ($(UNAME_S),Darwin)
MLX_DIR			:=			./minilibx/minilibx_mac
CLIB			:=			-L$(LIBFT_DIR) -lft -g -L$(MLX_DIR) $(MFLAGS)
endif

#==============================================================================#
#------------------------------------------------------------------------------#
#                                 RULES                                        #

all:					$(NAME)


$(NAME):				lib obj_inc $(OBJ)
	@$(CC) $(OFLAGS) $(OBJ) $(CLIB) -o $(NAME)
	@printf '\033[33m[ 100%% ] %s\n\033[0m' "Compilation of $(NAME) is done ---"


$(OBJ_DIR)/%.o:			$(SRC_DIR)/%.c
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo "$@"))
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ -c $<
	@printf "[ %d%% ] %s :: %s        \r" $(PERCENT) $(NAME) $@
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))


obj_inc:
	@mkdir -p $(OBJ_DIR)


lib:
	@make -C libft/ --no-print-directory
	@make -C $(MLX_DIR) --no-print-directory


clean:
	@make -C $(L_FT) clean --no-print-directory
	@make -C $(MLX_DIR) clean --no-print-directory
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@printf '\033[33m[ KILL ] %s\n\033[0m' "Clean of $(NAME) is done ---"


fclean: 				clean
	@rm -rf $(NAME)
	@make -C $(L_FT) fclean --no-print-directory
	@make -C $(MLX_DIR) clean --no-print-directory
	@printf '\033[33m[ KILL ] %s\n\033[0m' "Fclean of $(NAME) is done ---"


re:						fclean all


.PHONY: all clean fclean re build cbuild
