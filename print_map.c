/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:35:38 by admin             #+#    #+#             */
/*   Updated: 2022/06/18 05:23:14 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_map(t_game game)
{
	int		wid;
	int		hei;

	hei = 0;
	while (hei < game.height)
	{
		wid = 0;
		while (wid < game.width)
		{
			if (game.str_line[hei * game.width + wid] == '0')
				background(game, wid, hei);
			else if (game.str_line[hei * game.width + wid] == '1')
				wall(game, wid, hei);
			else if (game.str_line[hei * game.width + wid] == 'C')
				coin(game, wid, hei);
			else if (game.str_line[hei * game.width + wid] == 'P')
				player(game, wid, hei);
			else if (game.str_line[hei * game.width + wid] == 'E')
				safe(game, wid, hei);
			else
				wall(game, wid, hei);
			wid++;
		}
		hei++;
	}
}