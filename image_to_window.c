/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_to_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 18:17:34 by jlebre           ###   ########.fr       */
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

void	coin(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.pcoin,
		wid * 64, hei * 64);
}

void	player(t_game game, int wid, int hei)
{
	mlx_put_image_to_window(game.mlx, game.mlx_win, game.ppato,
		wid * 64, hei * 64);
}

void	safe(t_game game, int wid, int hei)
{
	if (game.col_count == game.num_c && game.col_count != 0)
	{
		mlx_put_image_to_window(game.mlx, game.mlx_win, game.safe_open,
			wid * 64, hei * 64);
	}
	else
		mlx_put_image_to_window(game.mlx, game.mlx_win, game.safe,
			wid * 64, hei * 64);
}
