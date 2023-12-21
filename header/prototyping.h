/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototyping.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:46:11 by phialfai          #+#    #+#             */
/*   Updated: 2023/10/06 10:32:01 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPING_H
# define PROTOTYPING_H

# include "solong.h"

/** ./params/params_core.c */
t_params	*params_map_set(t_params *p, int fd);
t_params	*params_game_set(t_params *p);
t_params	*params_display_set(t_params *p);
void		params_clean_ber(t_params *p);

/** ./params/params_func.c */
t_params	*params_init(t_params *p);
void		params_destroy(t_params *p);

/** ./controls.c */
int			ctl_close_win(t_params *p);
int			ctl_core(int keycode, t_params *p);
int			ctl_motion(t_params *p, int col, int row);
int			ctl_autorized(t_params *p, int col, int row);

/** ./display.c */
void		display_init(t_params *p);
int			display_frame_render(t_params *p);
int			display_game_render(t_params *p);

/** ./error.c */
void		*print_error(char *err_msg, char *strerr_msg);
void		exit_if(int state, char *err_msg, t_params *p);
void		exit_if2(int state, char *err_msg, t_params *p, void *ptr);

/** ./sprites.c */
void		sprites_init(t_params *p);
void		*sprite_image_set(t_params *p, char *file, int width, int height);
int			sprite_print_brik(t_params *p, int c, int r, char charset);

/** ./main.c */
int			**grid(char *ber, int map_cols, int map_rows);
void		**grid_destroy(int **grid, int map_rows);

/** ./validation */
void		map_validation(t_params *p);
int			argc_validation(int argc, int expected);
int			ber_validation(char *filename);
int			bounderies_validation(t_params *p);
int			path_validation(t_params *p);
int			shape_validation(t_params *p);
int			size_validation(t_params *p);
int			collectible_validation(t_params *p);
int			exit_validation(t_params *p);
int			player_validation(t_params *p);
int			charset_validation(t_params *p);
int			empty_line_validation(t_params *p);
int			check_line(char *line);

/** ./utils */
int			grid_loop_start(t_params *p, char c);
int			compute_col(int i, int cols);
int			compute_index(int col, int row, int map_cols);
int			compute_row(int i, int cols);
void		flood_fill(t_params *p, int r, int c);
void		free_ptr(void **ptr);
int			**matrix_int_create(int rows, int cols);
void		matrix_int_destroy(int ***matrix, int rows);
void		matrix_fill(char **matrix, int cols, char *data, char *charset);
void		**matrix_rollback(void **ptr, int breakpoint);
char		*remove_nl(char *line);
char		*clean_line(char *line);
void		clear_scren(void);

// void		delay(int nb);

/** ./prints.c */
void		print_welcome(void);
void		print_quit(void);
void		print_win(int moves);

/** ./print_moves.c */
void		print_moves(t_params *p, char *prefix, char *suffix);
void		print_exit(t_params *p);

/** ./destroy.c */
void		destroy_map(t_params *p);
void		destroy_display(t_params *p);
int			destroy_quit(t_params *p);
int			destroy_all(t_params *p);

/** ./parser */
t_params	*map_parser(t_params *p, int fd);

#endif
