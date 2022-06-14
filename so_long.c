/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 20:55:43 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		read_map(str, &game);
		check_map(&game);
		game.mlx = mlx_init();
		if (!game.mlx)
			ft_error("MLX init error!");
		game.mlx_win = mlx_new_window(game.mlx,
				game.width * 64, game.height * 64, "so_long");
		mlx_hook(game.mlx_win, X_EVENT_KEY_RELEASE, 1L << 0, &key_press, &game);
		ft_printf("Width: %d\nHeight: %d\n", game.width, game.height);
		print_map(game);
		mlx_loop(game.mlx);
	}
	return (0);
}
