/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/12 14:47:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_map(t_game game)
{
	int		wid;
	int		hei;
	int		img_width;
	int		img_height;

	game.background = mlx_xpm_file_to_image(game.mlx, "./image/background.xpm", &img_width, &img_height);
	game.bill = mlx_xpm_file_to_image(game.mlx, "./image/bill.xpm", &img_width, &img_height);
	game.pato = mlx_xpm_file_to_image(game.mlx, "./image/pato.xpm", &img_width, &img_height);
	game.safe = mlx_xpm_file_to_image(game.mlx, "./image/safe.xpm", &img_width, &img_height);
	game.wall = mlx_xpm_file_to_image(game.mlx, "./image/wall.xpm", &img_width, &img_height);

	hei = 0;
	while (hei < game.height)
	{
		wid = 0;
		while (wid < game.width)
		{
			if (game.str_line[hei * game.width + wid] == '0')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.background,
					wid * 64, hei * 64);
			}
			else if (game.str_line[hei * game.width + wid] == '1')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.wall,
					wid * 64, hei * 64);
			}
			else if (game.str_line[hei * game.width + wid] == 'C')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.bill,
					wid * 64, hei * 64);
			}
			else if (game.str_line[hei * game.width + wid] == 'P')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.pato,
					wid * 64, hei * 64);
			}
			else if (game.str_line[hei * game.width + wid] == 'E')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.safe,
					wid * 64, hei * 64);
			}
			else
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.wall,
					wid * 64, hei * 64);
			}
			wid++;
		}
		hei++;
	}
}
