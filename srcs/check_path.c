/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:04:15 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/06 22:21:56 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_exit(t_game *game, char **mapa)
{
	int	x;
	int	y;

	x = game->pos_exit_x;
	y = game->pos_exit_y;
	if (mapa[y][x + 1] == 'P' || mapa[y][x - 1] == 'P' \
	|| mapa[y + 1][x] == 'P' || mapa[y - 1][x] == 'P')
		return (0);
	return (1);
}

void	initial_position(t_game *game, int i, int j, char **mapa)
{
	if (mapa[j][i] == 'P')
	{
		game->pos_x = i;
		game->pos_y = j;
	}
	else if (mapa[j][i] == 'E')
	{
		game->pos_exit_x = i;
		game->pos_exit_y = j;
	}
}

char	**convert(t_game *game, int j, int k)
{
	int		i;
	char	**mapa;

	mapa = malloc(sizeof(char *) * (1 + game->height));
	if (!mapa)
		return (NULL);
	while (++j < game->height)
	{
		i = 0;
		mapa[j] = malloc(sizeof(char) * (game->width + 1));
		if (!mapa[j])
			return (NULL);
		while (i < game->width)
		{
			mapa[j][i] = game->str_line[k++];
			initial_position(game, i, j, mapa);
			i++;
		}
		mapa[j][i] = '\0';
	}
	return (mapa);
}

int	check_case(t_game *game, int x, int y, char **map)
{
	if (x < 0 || y < 0 || x >= game->width || y >= game->height)
		return (0);
	if (map[y][x] != '1' && map[y][x] != 'E' && map[y][x] != 'P')
	{
		map[y][x] = 'P';
		return (1);
	}
	return (0);
}

void	check_all_dir(t_game *game, int x, int y, char **map)
{
	if (check_case(game, x - 1, y, map))
		check_all_dir(game, x - 1, y, map);
	if (check_case(game, x + 1, y, map))
		check_all_dir(game, x + 1, y, map);
	if (check_case(game, x, y - 1, map))
		check_all_dir(game, x, y - 1, map);
	if (check_case(game, x, y + 1, map))
		check_all_dir(game, x, y + 1, map);
}
