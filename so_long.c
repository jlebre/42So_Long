/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 17:33:54 by jlebre           ###   ########.fr       */
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

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*background;
	void	*bill;
	void	*pato;
	void	*safe;
	t_param	param;
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "so_long");
	background = mlx_xpm_file_to_image(mlx, "./image/background.xpm", &img_width, &img_height);
	bill = mlx_xpm_file_to_image(mlx, "./image/bill.xpm", &img_width, &img_height);
	pato = mlx_xpm_file_to_image(mlx, "./image/pato.xpm", &img_width, &img_height);
	safe = mlx_xpm_file_to_image(mlx, "./image/safe.xpm", &img_width, &img_height);
	mlx_put_image_to_window(mlx, mlx_win, background, 0, 0);
	mlx_put_image_to_window(mlx, mlx_win, bill, 64, 0);
	mlx_put_image_to_window(mlx, mlx_win, pato, 128, 0);
	mlx_put_image_to_window(mlx, mlx_win, safe, 192, 64);
	param_init(&param);
	mlx_hook(mlx_win, X_EVENT_KEY_RELEASE, 0, &key_press, &param);
	mlx_loop(mlx);
}

//argv - map.ber
