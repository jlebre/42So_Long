/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:34:45 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/06 22:59:25 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* 
// MAC KEYS:
# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3
# define KEY_ESC				53
# define KEY_W					13
# define KEY_A					0
# define KEY_D					1
# define KEY_S					2
# define UP 					126
# define DOWN 					124
# define LEFT					123
# define RIGHT 					125
*/

// LINUX KEYS:
# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3
# define KEY_ESC				65307
# define KEY_W					119
# define KEY_A					97
# define KEY_D					100
# define KEY_S					115
# define UP 					65362
# define DOWN 					65364
# define LEFT					65361
# define RIGHT 					65363

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "mlx_linux/mlx.h"
# include <fcntl.h>
# include "libft/libft.h"

typedef struct s_game
{
	int		height;
	int		width;
	int		pos_x;
	int		pos_y;
	int		pos_exit_x;
	int		pos_exit_y;
	int		counter;
	int		col_count;
	int		num_c;
	int		num_e;
	int		num_p;
	int		time_coin;
	char	*str_line;
	char	*str_line_test;
	void	*mlx;
	void	*mlx_win;
	void	*background;
	void	*coin[12];
	void	*pcoin;
	void	*pato[4];
	void	*ppato;
	void	*safe;
	void	*safe_open;
	void	*wall;
}	t_game;

//ANIMATIONS
void	player_sprite(int keycode, t_game *game);
void	coin_animation(t_game *game);
void	coin_animation1(t_game *game);

//CHECK MAP WALLS
void	check_map_walls(t_game *game);
void	check_map_name(char *map);
void	check_path(t_game *game);
int		check_exit(t_game *game, char **mapa);
char	ft_mini_strchar(char *str, char c);
char	**convert(t_game *game, int j, int k);
void	initial_position(t_game *game, int i, int j, char **mapa);
int		check_case(t_game *game, int x, int y, char **map);
void	check_all_dir(t_game *game, int x, int y, char **map);
void	check_map(t_game *game);
void	check(t_game *game);

//INIT IMAGES
void	init_img(t_game *game);
void	init_coin(t_game *game);
void	init_coin1(t_game *game);
void	init_vars(t_game *game);

//CREATE MAP
void	read_map(char *file, t_game *game);
void	print_map(t_game game);
int		render(t_game *game);

//IMAGE TO WINDOW
void	background(t_game game, int wid, int hei);
void	wall(t_game game, int wid, int hei);
void	coin(t_game game, int wid, int hei);
void	player(t_game game, int wid, int hei);
void	safe(t_game game, int wid, int hei);
void	safe_open(t_game game, int wid, int hei);

//KEY PRESS
int		key_press(int keycode, t_game *game);

//MOVES
void	move_w(t_game *game);
void	move_a(t_game *game);
void	move_d(t_game *game);
void	move_s(t_game *game);

//COLORS
int		ft_red(char *str);
int		ft_green(char *str);
int		ft_yellow(char *str);

//VICTORY
void	victory(t_game *game);

//ERROR
void	ft_error(char *err);

//EXIT
int		ft_exit(t_game *game);
void	destroy_img(t_game *game);

#endif