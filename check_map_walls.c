/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_walls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:12:18 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 15:49:06 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_first_line(char **map)
{
	int	i;

	i = 0;
	while (map[0][i] != '\n')
	{
		if (map[0][i] != '1')
			ft_error("The top wall is not correct\n");
		i++;
	}
	return (0);
}

int	check_sides(char **map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = map_height(map) - 1;
	k = map_width(map);
	while (i < j)
	{
		if (ft_strlen(map[i]) > k)
			ft_error("Line is too long\n");
		if (map[i][0] != '1')
			ft_error("The left wall is not correct\n");
		if (map[i][k] != '1')
			ft_error("The right wall is not correct\n");
		i++;
	}
	return (0);
}

int	check_last_line(char **map)
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

void	check(char **map)
{
	check_first_line(map);
	check_sides(map);
	check_last_line(map);
}
