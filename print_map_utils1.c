/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:11:06 by admin             #+#    #+#             */
/*   Updated: 2022/06/18 06:52:00 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_img1(t_game *game)
{
	int		img_width;
	int		img_height;
	t_moves	moves;

    moves.num_0 = mlx_xpm_file_to_image(game->mlx, "./image/0_nb.xpm",
			&img_width, &img_height);
	moves.num_1 = mlx_xpm_file_to_image(game->mlx, "./image/1_nb.xpm",
			&img_width, &img_height);
	moves.num_2 = mlx_xpm_file_to_image(game->mlx, "./image/2_nb.xpm",
			&img_width, &img_height);
	moves.num_3 = mlx_xpm_file_to_image(game->mlx, "./image/3_nb.xpm",
			&img_width, &img_height);
	moves.num_4 = mlx_xpm_file_to_image(game->mlx, "./image/4_nb.xpm",
			&img_width, &img_height);
	moves.num_5 = mlx_xpm_file_to_image(game->mlx, "./image/5_nb.xpm",
			&img_width, &img_height);
	moves.num_6 = mlx_xpm_file_to_image(game->mlx, "./image/6_nb.xpm",
			&img_width, &img_height);
	moves.num_7 = mlx_xpm_file_to_image(game->mlx, "./image/7_nb.xpm",
			&img_width, &img_height);
	moves.num_8 = mlx_xpm_file_to_image(game->mlx, "./image/8_nb.xpm",
			&img_width, &img_height);
	moves.num_9 = mlx_xpm_file_to_image(game->mlx, "./image/9_nb.xpm",
			&img_width, &img_height);
}

void	init_img(t_game *game)
{
	int		img_width;
	int		img_height;

	game->background = mlx_xpm_file_to_image(game->mlx, "./image/background.xpm",
			&img_width, &img_height);
	game->wall = mlx_xpm_file_to_image(game->mlx, "./image/wall.xpm",
			&img_width, &img_height);
	game->bill = mlx_xpm_file_to_image(game->mlx, "./image/bill.xpm",
			&img_width, &img_height);
	game->pato = mlx_xpm_file_to_image(game->mlx, "./image/pato_s.xpm",
			&img_width, &img_height);
	game->safe = mlx_xpm_file_to_image(game->mlx, "./image/safe.xpm",
			&img_width, &img_height);
	init_img1(game);
}

void    player_sprite(int   keycode, t_game *game)
{
    int		img_width;
	int		img_height;

    if (keycode == KEY_W || keycode == UP)
        game->pato = mlx_xpm_file_to_image(game->mlx, "./image/pato_w.xpm",
			&img_width, &img_height);
    else if (keycode == KEY_A || keycode == LEFT)
		game->pato = mlx_xpm_file_to_image(game->mlx, "./image/pato_a.xpm",
			&img_width, &img_height);
	else if (keycode == KEY_D || keycode == RIGHT)
		game->pato = mlx_xpm_file_to_image(game->mlx, "./image/pato_s.xpm",
			&img_width, &img_height);
	else if (keycode == KEY_S || keycode == DOWN)
		game->pato = mlx_xpm_file_to_image(game->mlx, "./image/pato_d.xpm",
			&img_width, &img_height);
	print_map(*game);
}

/*
void    print_moves1(t_game *game)
{
    
}
*/

void    print_moves(t_game *game)
{
	t_moves	moves;
	
    if (game->counter < 10)
		mlx_put_image_to_window(game->mlx, game->mlx_win, moves.num_0,
			100, 100);
	print_map(*game);
}
