/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/18 05:22:53 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	background(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.background,
		wid * 64, hei * 64);
}

void	wall(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.wall,
		wid * 64, hei * 64);
}

void	bill(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.bill,
		wid * 64, hei * 64);
}

void	coin(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.coin,
		wid * 64, hei * 64);
}

void	player(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.pato,
		wid * 64, hei * 64);
}

void	safe(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;
	
	if (game.col_count == game.num_c && game.col_count != 0)
		game.safe = mlx_xpm_file_to_image(game.mlx, "./image/safe_open.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.safe,
		wid * 64, hei * 64);
}
