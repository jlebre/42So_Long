/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_walls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:12:18 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 22:50:09 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_first_line(int i, t_game *game)
{
	while (game->str_line[i] < game->width)
	{
		if (game->str_line[i] != '1')
			ft_error("The top wall is not correct\n");
		i++;
	}
	return (i);
}

int	check_sides(int i, t_game *game)
{
	int	j;
	int	k;

	j = map_height(map) - 1;
	k = map_width(map);
	while (i < (game->height - 2) * game->width)
	{
		if (map[i][0] != '1')
			ft_error("The left wall is not correct\n");
		if (map[i][k] != '1')
			ft_error("The right wall is not correct\n");
		i++;
	}
	return (0);
}

int	check_last_line(int i, t_game *game)
{
	int	i;
	int	j;

	i = map_height(map) - 1;
	j = 0;
	while (map[i][j] != '\n')
	{
		if (ft_strlen(map[i]) > map_width(map))
			ft_error("Line is too long\n");
		if (map[i][j] != '1')
			ft_error("The bottom wall is not correct\n");
		j++;
	}
	return (0);
}

void	check(t_game *game)
{
	int	i;

	i = 0;
	i = check_first_line(i, game);
	i = check_sides(i, game);
	i = check_last_line(i, game);
	ft_green("Walls are correct\n");
}
