/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:34:45 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/18 06:43:50 by admin            ###   ########.fr       */
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
# define KEY_D					115
# define KEY_S					100
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

typedef struct s_moves
{
	void	*num_0;
	void	*num_1;
	void	*num_2;
	void	*num_3;
	void	*num_4;
	void	*num_5;
	void	*num_6;
	void	*num_7;
	void	*num_8;
	void	*num_9;
}	t_moves;

typedef struct s_game
{
	int		height;
	int		width;
	int		counter;
	int		col_count;
	int		num_c;
	int		num_e;
	int		num_p;
	int		time_coin;
	char	*str_line;
	void	*mlx;
	void	*mlx_win;
	void	*background;
	void	*coin;
	void	*bill;
	void	*pato;
	void	*safe;
	void	*wall;
}	t_game;

//ANIMATIONS
void    coin_animation(t_game *game);

//ERROR
void	ft_error(char *err);

//MAP DIMENSIONS
int		map_width(char **map);
int		map_height(char **map);

//CHECK MAP WALLS
void	check(t_game *game);

//CREATE MAP
void	read_map(char *file, t_game *game);
void	print_map(t_game game);
void	init_img(t_game *game);
void	background(t_game game, int wid, int hei);
void	wall(t_game game, int wid, int hei);
void	bill(t_game game, int wid, int hei);
void	coin(t_game game, int wid, int hei);
void	player(t_game game, int wid, int hei);
void	safe(t_game game, int wid, int hei);
void	print_map_utils(t_game game);
void    player_sprite(int   keycode, t_game *game);
int		render(t_game *game);
void    print_moves(t_game *game);

//KEY PRESS
int		key_press(int keycode, t_game *game);
void	move_w(t_game *game);
void	move_a(t_game *game);
void	move_d(t_game *game);
void	move_s(t_game *game);

//COLORS
int		ft_red(char *str);
int		ft_green(char *str);
int		ft_yellow(char *str);

//VICTORY
void	victory(void);

//EXIT
int		ft_exit(t_game *game);

#endif