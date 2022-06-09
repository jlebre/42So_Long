/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 19:30:05 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err)
{
	ft_printf("\033[0;31mError\n%s\033[0m", err);
	exit(1);
}

void	param_init(t_param *param)
{
	param->x = 3;
	param->y = 4;
}

void	game_init(t_game *game)
{
	game->mlx = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx, game->width, game->height, "so_long");
}

int	key_press(int keycode, t_param *param)
{
	if (keycode == KEY_W)
		param->y++;
	else if (keycode == KEY_A)
		param->x--;
	else if (keycode == KEY_D)
		param->x++;
	else if (keycode == KEY_S)
		param->y--;
	else if (keycode == KEY_ESC)
		exit (0);
	ft_printf("x: %d, y: %d\n", param->x, param->y);
	return (0);
}

int	main(int argc, char **argv)
{
	//void	*mlx;
	//void	*mlx_win;
	t_param	param;
	t_game	*game;

	if (argc == 2)
	{
		game_init(game);
		//mlx = mlx_init();
		//check_map(argv[1]);
		read_map(argv[1], game);
		//mlx_win = mlx_new_window(mlx, game->width, game->height, "so_long");
		param_init(&param);
		mlx_hook(game->mlx_win, X_EVENT_KEY_RELEASE, 0, &key_press, &param);
		mlx_loop(game->mlx);
	}
	return (0);
}

//argv - map.ber

/*
background = mlx_xpm_file_to_image(mlx, "./image/background.xpm", &img_width, &img_height);
bill = mlx_xpm_file_to_image(mlx, "./image/bill.xpm", &img_width, &img_height);
pato = mlx_xpm_file_to_image(mlx, "./image/pato.xpm", &img_width, &img_height);
safe = mlx_xpm_file_to_image(mlx, "./image/safe.xpm", &img_width, &img_height);
*/