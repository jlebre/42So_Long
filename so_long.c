/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 17:52:27 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;
	char	*str;

	if (argc != 2)
		ft_error("Map is missing!\n");
	str = argv[1];
	read_map(str, &game);
	check(&game);
	game.mlx = mlx_init();
	if (!game.mlx)
		ft_error("MLX init error!");
	init_img(&game);
	init_vars(&game);
	game.mlx_win = mlx_new_window(game.mlx,
			game.width * 64, game.height * 64, "so_long");
	mlx_loop_hook(game.mlx, render, &game);
	mlx_hook(game.mlx_win, 2, 1L << 0, &key_press, &game);
	mlx_hook(game.mlx_win, 17, 1L << 17, &ft_exit, &game);
	mlx_loop(game.mlx);
	return (0);
}
