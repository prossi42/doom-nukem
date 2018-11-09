# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgaillar <jgaillar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/26 20:10:24 by jgaillar          #+#    #+#              #
#    Updated: 2018/11/09 13:27:13 by Awklm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = srcs/

SRC_NAME = main.c get_env.c mlx_processes.c main_keyhooks.c exit.c \
							struct_init.c set_env.c set_struct_lang_en.c \
							set_struct_lang_fr.c resize_mode.c \
							set_struct_lang_not_chosen.c choose_language_mode.c \
							resize_mode_init_values.c choose_language_mode_init_values.c \
							awklm_productions_mode.c awklm_productions_background_init_values.c \
							main_menu_mode.c main_menu_mode_init_values.c \
							main_menu_background_init_values.c main_menu_write_init_values.c

EDITOR_PATH = srcs/editor/

SRC_NAME_EDITOR = editor.c editor_keyhooks.c editor_menu.c editor_mouse_move_hook.c \
					editor_mouse_click_hook.c editor_new_map_settings.c \
					editor_exit_warnings.c editor_new_map_settings_checking_values.c \
					editor_get_maps.c editor_new_map_settings_clear_all_fields.c \
					editor_alt_map.c editor_new_map_creating.c editor_main_map.c

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_SRC_EDITOR = $(SRC_NAME_EDITOR:.c=.o)

CPPFLAGS = -Iincludes

NAME = doom-nukem

CC = clang

CFLAGS = -Wall -Wextra -Werror

FDFFLAGS = -framework OpenGL -framework Appkit -lpthread -D_REENTRANT

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

SRC_EDITOR = $(addprefix $(EDITOR_PATH)/,$(SRC_NAME_EDITOR))

OBJ = $(addprefix $(SRC_PATH)/,$(OBJ_NAME))

OBJ_EDITOR = $(addprefix $(EDITOR_PATH)/,$(OBJ_SRC_EDITOR))

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_EDITOR)
	@cd libft ; make ; cd ..
	@cd mlx ; make ; cd ..
	$(CC) $(CCFLAGS) $(FDFFLAGS) $(CPPFLAGS) libft/libft.a mlx/libmlx.a $^ -o $@

clean:
	cd $(SRC_PATH) ; rm -rf $(OBJ_NAME) ; cd -
	cd $(EDITOR_PATH) ; rm -rf $(OBJ_SRC_EDITOR) ; cd -

fclean: clean
	rm -rf libft/libft.a
	rm -rf mlx/libmlx.a
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean
