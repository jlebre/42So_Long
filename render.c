/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:38:33 by admin             #+#    #+#             */
/*   Updated: 2022/09/01 18:13:15 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	render(t_game *game)
{
	if (!game->mlx)
		return (0);
	print_map(*game);
	mlx_string_put(game->mlx, game->mlx_win, 10, 30, 0xffffffff,
		ft_itoa(game->counter));
	coin_animation(game);
	return (1);
}
