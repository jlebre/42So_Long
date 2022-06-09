/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 14:09:20 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_map(char **map)
{
	int		width;
	int		height;
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	width = map_width(map);
	height = map_height(map);
	mlx_win = mlx_new_window(mlx, width * 50, height * 50, "so_long");
	mlx_loop(mlx);
}
