/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:52 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/06 23:02:26 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_walls(t_game *game)
{
	int	i;

	i = 0;
	if (game->height * game->width != ft_strlen(game->str_line))
		ft_error("Map is not rectangular!\n");
	while (i < ft_strlen(game->str_line))
	{
		if (i < game->width)
		{
			if (game->str_line[i] != '1')
				ft_error("Top wall is not correct\n");
		}
		else if (i % game->width == 0 || i % game->width == game->width - 1)
		{
			if (game->str_line[i] != '1')
				ft_error("Side walls are not correct\n");
		}
		else if (i > ft_strlen(game->str_line) - game->width)
		{
			if (game->str_line[i] != '1')
				ft_error("Bottom wall is not correct\n");
		}
		i++;
	}
}

void	check_map(t_game *game)
{
	int		i;

	i = 0;
	while (game->str_line[i] != '\0')
	{
		if (game->str_line[i] != 'C' && game->str_line[i] != 'E'
			&& game->str_line[i] != 'P' && game->str_line[i] != '0'
			&& game->str_line[i] != '1')
			ft_error("Unrecognized character on map!\n");
		if (game->str_line[i] == 'C')
			game->num_c++;
		else if (game->str_line[i] == 'E')
			game->num_e++;
		else if (game->str_line[i] == 'P')
			game->num_p++;
		i++;
	}
}

void	check(t_game *game)
{
	game->num_c = 0;
	game->num_e = 0;
	game->num_p = 0;
	check_map_walls(game);
	check_map(game);
	if (game->num_c == 0)
		ft_error("Map must have at least one collectible!\n");
	if (game->num_e == 0)
		ft_error("Map must have one exit!\n");
	if (game->num_e != 1)
		ft_error("Map can only have one exit!\n");
	if (game->num_p == 0)
		ft_error("Map must have one starting position!\n");
	if (game->num_p != 1)
		ft_error("Map can only have one starting position!\n");
	check_path(game);
}

void	check_path(t_game *game)
{
	char	**map;
	int		l;
	int		is_error;

	map = convert(game, -1, 0);
	l = -1;
	check_all_dir(game, game->pos_x, game->pos_y, map);
	is_error = check_exit(game, map);
	while (++l < game->height)
	{
		if ((ft_mini_strchar(map[l], 'C') == 'C'))
			is_error = 1;
		free(map[l]);
	}
	free(map);
	if (is_error)
		ft_error("Map does not have a valid path!\n");
}

char	ft_mini_strchar(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (c);
		i++;
	}
	return (0);
}
