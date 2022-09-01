/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:05:55 by admin             #+#    #+#             */
/*   Updated: 2022/09/01 18:23:29 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Player Animations
void	player_sprite(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == UP)
		game->ppato = game->pato[1];
	else if (keycode == KEY_A || keycode == LEFT)
		game->ppato = game->pato[2];
	else if (keycode == KEY_D || keycode == RIGHT)
		game->ppato = game->pato[3];
	else if (keycode == KEY_S || keycode == DOWN)
		game->ppato = game->pato[0];
	print_map(*game);
}

//Coin Animations
void	coin_animation1(t_game *game)
{
	if (game->time_coin < 2400)
		game->pcoin = game->coin[7];
	else if (game->time_coin < 2700)
		game->pcoin = game->coin[8];
	else if (game->time_coin < 3000)
		game->pcoin = game->coin[9];
	else if (game->time_coin < 3300)
		game->pcoin = game->coin[10];
	else if (game->time_coin < 3600)
		game->pcoin = game->coin[11];
	else
		game->time_coin = 0;
	game->time_coin++;
}

void	coin_animation(t_game *game)
{
	if (game->time_coin < 300)
		game->pcoin = game->coin[0];
	else if (game->time_coin < 600)
		game->pcoin = game->coin[1];
	else if (game->time_coin < 900)
		game->pcoin = game->coin[2];
	else if (game->time_coin < 1200)
		game->pcoin = game->coin[3];
	else if (game->time_coin < 1500)
		game->pcoin = game->coin[4];
	else if (game->time_coin < 1800)
		game->pcoin = game->coin[5];
	else if (game->time_coin < 2100)
		game->pcoin = game->coin[6];
	else
		coin_animation1(game);
	game->time_coin++;
}
