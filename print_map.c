/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 18:52:09 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_map(t_game game)
{
	int		wid;
	int		hei;

	hei = 0;
	while (game.height > hei)
	{
		wid = 0;
		while (game.width > wid)
		{
			if (game.str_line[hei * game.width + wid] == '1')
			{
				mlx_put_image_to_window(game.mlx, game.mlx_win, game.background,
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
			wid++;
		}
		hei++;
	}
}
