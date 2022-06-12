/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/12 16:12:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err)
{
	ft_printf("\033[0;31mError\n%s\033[0m", err);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_game	game;
	char 	*str;
	
	if (argc == 2)
	{
		str = argv[1];
		//check_map(str);
		read_map(str, &game);
		game.mlx = mlx_init();
		if (!game.mlx)
			ft_error("MLX init error!");
		game.mlx_win = mlx_new_window(game.mlx, game.width * 64, game.height * 64, "so_long");
		mlx_hook(game.mlx_win, X_EVENT_KEY_RELEASE, 0, &key_press, &game);
		ft_printf("Width: %d\nHeight: %d\n", game.width, game.height);
		print_map(game);
		mlx_loop(game.mlx);
	}
	return (0);
}
