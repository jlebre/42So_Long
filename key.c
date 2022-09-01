/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:39:57 by marvin            #+#    #+#             */
/*   Updated: 2022/06/12 15:39:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == UP)
	{
		player_sprite(keycode, game);	
		move_w(game);
	}
	else if (keycode == KEY_A || keycode == LEFT)
	{
		player_sprite(keycode, game);	
		move_a(game);
	}
	else if (keycode == KEY_D || keycode == RIGHT)
	{
		player_sprite(keycode, game);	
		move_d(game);
	}
	else if (keycode == KEY_S || keycode == DOWN)
	{
		player_sprite(keycode, game);	
		move_s(game);
	}
	else if (keycode == KEY_ESC)
		ft_exit (game);
	return (0);
}
