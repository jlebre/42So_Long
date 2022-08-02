/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:38:33 by admin             #+#    #+#             */
/*   Updated: 2022/06/18 06:50:44 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int render(t_game *game)
{
    if (!game->mlx)
        return (0);
    coin_animation(game);
    print_map(*game);
    //print_moves(game);
    return (1);
}