/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:22:21 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/17 23:16:12 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err)
{
	ft_printf("\033[0;31mError!\n%s\033[0m", err);
	exit(0);
}

void	victory(void)
{
	ft_green("You Won!\n");
	exit (0);
}

int		ft_exit(t_game *game)
{
	mlx_destroy_window(game->mlx, game->mlx_win);
	ft_green("Game exited sucessfully!\n");
	exit (0);
}
