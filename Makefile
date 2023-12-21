NAME		= 	so_long.a
CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror -I.
AR			= 	ar
AFLAGS		= 	rcs
SRCS	 	=	libft/ft_strlen.c \
				libft/ft_strjoin.c \
				libft/ft_itoa.c \
				libft/ft_split.c \
				libft/ft_substr.c \
				libft/ft_memcpy.c \
				libft/ft_memmove.c \
				libft/ft_putchar_fd.c \
				libft/ft_putstr_fd.c \
				libft/ft_strncmp.c \
				libft/ft_strchr.c \
				libft/ft_strdup.c \
				libft/ft_strlcpy.c \
				\
				libft/get_next_line.c \
				libft/get_next_line_utils.c \
				\
				validation/argc_validation.c \
				validation/bounderies_validation.c \
				validation/map_validation.c \
				validation/path_validation.c \
				validation/shape_validation.c \
				validation/size_validation.c \
				validation/ber_validation.c \
				validation/collectible_validation.c \
				validation/exit_validation.c \
				validation/player_validation.c \
				validation/charset_validation.c \
				validation/empty_line_validation.c \
				validation/check_line.c \
				\
				utils/grid_loop_start.c \
				utils/compute_col.c \
				utils/compute_index.c \
				utils/compute_row.c \
				utils/flood_fill.c \
				utils/free_ptr.c \
				utils/matrix_int_create.c \
				utils/matrix_int_destroy.c \
				utils/matrix_fill.c \
				utils/matrix_rollback.c \
				utils/remove_nl.c \
				utils/clean_line.c \
				utils/clean_ber.c \
				utils/clear_screen.c \
				\
				parser/map_parser.c \
				\
				params_core.c \
				params_func.c \
				controls.c \
				display.c \
				error.c \
				destroy.c \
				sprites.c \
				prints.c \
				print_moves.c \
				solong.c

MLX_DIR = ./mlx
INCLUDES = -I ./header
MLX_FLAGS = -Lmlx -lmlx -lXext -lX11 -lm

OBJS = $(SRCS:.c=.o)

all: $(NAME)
 
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
 
$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(NAME) $(INCLUDES) $(MLX_FLAGS) -o $(basename $(NAME))


mlxtgz:
	if [ ! -d "~/mlx" ]; then tar zxvf minilibx-linux.tgz ; fi
	mv minilibx-linux mlx

mlx:
	@make -sC mlx

clean:
	rm -f $(NAME) $(OBJS)

fclean: clean
	rm -f $(basename $(NAME))

re: fclean all

exe:
	./$(basename $(NAME)) maps/basic.ber

norminette:
	norminette -R CheckForbiddenSourceHeader ./header ./libft ./parser ./utils ./validation
	norminette -R CheckForbiddenSourceHeader \
		./controls.c \
		./destroy.c \
		./display.c \
		./error.c \
		./params_core.c \
		./params_func.c \
		./print_moves.c \
		./prints.c \
		./solong.c \
		./sprites.c

.PHONY: all clean fclean re exe