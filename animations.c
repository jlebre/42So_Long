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

void    coin_animation1(t_game *game)
{
    int		img_width;
	int		img_height;

    if (game->time_coin < 80)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin8.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 90)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin9.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 100)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin10.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 110)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin11.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 120)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin12.xpm",
                &img_width, &img_height);
    else
        game->time_coin = 0;
    game->time_coin++;
}

void    coin_animation(t_game *game)
{
    int		img_width;
	int		img_height;

    if (game->time_coin < 10)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin1.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 20)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin2.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 30)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin3.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 40)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin4.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 50)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin5.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 60)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin6.xpm",
                &img_width, &img_height);
    else if (game->time_coin < 70)
        game->coin = mlx_xpm_file_to_image(game->mlx, "./image/coin7.xpm",
                &img_width, &img_height);
    else
        coin_animation1(game);
    game->time_coin++; 
}
