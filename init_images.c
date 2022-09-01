/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:54:14 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 18:21:14 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Init Backgroud, Walls and Player Images
void	init_img(t_game *game)
{
	int		img_width;
	int		img_height;

	game->background = mlx_xpm_file_to_image(game->mlx, "image/background.xpm",
			&img_width, &img_height);
	game->wall = mlx_xpm_file_to_image(game->mlx, "./image/wall.xpm",
			&img_width, &img_height);
	game->pato[3] = mlx_xpm_file_to_image(game->mlx, "./image/pato_s.xpm",
			&img_width, &img_height);
	game->pato[1] = mlx_xpm_file_to_image(game->mlx, "./image/pato_w.xpm",
			&img_width, &img_height);
	game->pato[2] = mlx_xpm_file_to_image(game->mlx, "./image/pato_a.xpm",
			&img_width, &img_height);
	game->pato[0] = mlx_xpm_file_to_image(game->mlx, "./image/pato_d.xpm",
			&img_width, &img_height);
	game->safe = mlx_xpm_file_to_image(game->mlx, "./image/safe.xpm",
			&img_width, &img_height);
	game->safe_open = mlx_xpm_file_to_image(game->mlx, "./image/safe_open.xpm",
			&img_width, &img_height);
	init_coin(game);
}

//Init Coin Images
void	init_coin(t_game *game)
{
	int	img_width;
	int	img_height;

	game->coin[0] = mlx_xpm_file_to_image(game->mlx, "./image/coin1.xpm",
			&img_width, &img_height);
	game->coin[1] = mlx_xpm_file_to_image(game->mlx, "./image/coin2.xpm",
			&img_width, &img_height);
	game->coin[2] = mlx_xpm_file_to_image(game->mlx, "./image/coin3.xpm",
			&img_width, &img_height);
	game->coin[3] = mlx_xpm_file_to_image(game->mlx, "./image/coin4.xpm",
			&img_width, &img_height);
	game->coin[4] = mlx_xpm_file_to_image(game->mlx, "./image/coin5.xpm",
			&img_width, &img_height);
	game->coin[5] = mlx_xpm_file_to_image(game->mlx, "./image/coin6.xpm",
			&img_width, &img_height);
	init_coin1(game);
}

void	init_coin1(t_game *game)
{
	int	img_width;
	int	img_height;

	game->coin[6] = mlx_xpm_file_to_image(game->mlx, "./image/coin7.xpm",
			&img_width, &img_height);
	game->coin[7] = mlx_xpm_file_to_image(game->mlx, "./image/coin8.xpm",
			&img_width, &img_height);
	game->coin[8] = mlx_xpm_file_to_image(game->mlx, "./image/coin9.xpm",
			&img_width, &img_height);
	game->coin[9] = mlx_xpm_file_to_image(game->mlx, "./image/coin10.xpm",
			&img_width, &img_height);
	game->coin[10] = mlx_xpm_file_to_image(game->mlx, "./image/coin11.xpm",
			&img_width, &img_height);
	game->coin[11] = mlx_xpm_file_to_image(game->mlx, "./image/coin12.xpm",
			&img_width, &img_height);
}

//Init Vars
void	init_vars(t_game *game)
{
	game->ppato = game->pato[3];
	game->pcoin = game->coin[0];
	game->counter = 0;
	game->col_count = 0;
}
