/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 21:58:09 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	background(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;

	game.background = mlx_xpm_file_to_image(game.mlx, "./image/background.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.background,
		wid * 64, hei * 64);
}

void	wall(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;

	game.wall = mlx_xpm_file_to_image(game.mlx, "./image/wall.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.wall,
		wid * 64, hei * 64);
}

void	bill(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;

	game.bill = mlx_xpm_file_to_image(game.mlx, "./image/bill.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.bill,
		wid * 64, hei * 64);
}

void	player(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;

	game.pato = mlx_xpm_file_to_image(game.mlx, "./image/pato.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.pato,
		wid * 64, hei * 64);
}

void	safe(t_game game, int wid, int hei)
{
	int		img_width;
	int		img_height;

	game.safe = mlx_xpm_file_to_image(game.mlx, "./image/safe.xpm",
			&img_width, &img_height);
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.safe,
		wid * 64, hei * 64);
}
