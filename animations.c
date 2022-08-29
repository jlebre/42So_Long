/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:05:55 by admin             #+#    #+#             */
/*   Updated: 2022/06/18 06:36:10 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    init_coin_animation(t_game *game)
{
    int		img_width;
	int		img_height;

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

void    coin_animation1(t_game *game)
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

void    coin_animation(t_game *game)
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
