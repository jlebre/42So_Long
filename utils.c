/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:22:21 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 18:10:43 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err)
{
	ft_printf("\033[0;31mError!\n%s\033[0m", err);
	exit(0);
}

void	victory(t_game *game)
{
	ft_green("You Won!\n");
	ft_exit (game);
}

void	destroy_img(t_game *game)
{
	int	i;

	i = 0;
	mlx_destroy_image(game->mlx, game->background);
	mlx_destroy_image(game->mlx, game->safe);
	mlx_destroy_image(game->mlx, game->safe_open);
	mlx_destroy_image(game->mlx, game->wall);
	while (i < 12)
	{
		mlx_destroy_image(game->mlx, game->coin[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		mlx_destroy_image(game->mlx, game->pato[i]);
		i++;
	}	
}

int	ft_exit(t_game *game)
{
	free(game->str_line);
	mlx_destroy_window(game->mlx, game->mlx_win);
	destroy_img(game);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	ft_green("Game exited sucessfully!\n");
	exit (0);
}
