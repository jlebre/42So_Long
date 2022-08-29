/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:39:57 by marvin            #+#    #+#             */
/*   Updated: 2022/06/12 15:39:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_game *game)
{
	printf("%d\n", keycode);
	if (keycode == KEY_W || keycode == UP)
	{
		player_sprite(keycode, game);	
		move_w(game);
	}
	else if (keycode == KEY_A || keycode == LEFT)
	{
		player_sprite(keycode, game);	
		move_a(game);
	}
	else if (keycode == KEY_D || keycode == RIGHT)
	{
		player_sprite(keycode, game);	
		move_d(game);
	}
	else if (keycode == KEY_S || keycode == DOWN)
	{
		player_sprite(keycode, game);	
		move_s(game);
	}
	else if (keycode == KEY_ESC)
		exit (0);
	return (0);
}

void	move_w(t_game *game)
{
	int	i;

	i = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (game->str_line[i] == 'P')
			break ;
		i++;
	}
	if (game->str_line[i - game->width] == 'C')
			game->col_count++;
	if (game->str_line[i - game->width] == 'E'
		&& game->col_count == game->num_c)
		victory();
	else if (game->str_line[i - game->width] != '1'
		&& game->str_line[i - game->width] != 'E')
	{
		game->str_line[i] = '0';
		game->str_line[i - game->width] = 'P';
		game->counter++;
		ft_printf("%d\n", game->counter);
		print_map(*game);
	}
}

void	move_a(t_game *game)
{
	int	i;

	i = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (game->str_line[i] == 'P')
			break ;
		i++;
	}
	if (game->str_line[i - 1] == 'C')
			game->col_count++;
	if (game->str_line[i - 1] == 'E'
		&& game->col_count == game->num_c)
		victory();
	else if (game->str_line[i - 1] != '1'
		&& game->str_line[i - 1] != 'E')
	{
		game->str_line[i] = '0';
		game->str_line[i - 1] = 'P';
		game->counter++;
		ft_printf("%d\n", game->counter);
		print_map(*game);
	}
}

void	move_d(t_game *game)
{
	int	i;

	i = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (game->str_line[i] == 'P')
			break ;
		i++;
	}
	if (game->str_line[i + game->width] == 'C')
			game->col_count++;
	if (game->str_line[i + game->width] == 'E'
		&& game->col_count == game->num_c)
		victory();
	else if (game->str_line[i + game->width] != '1'
		&& game->str_line[i + game->width] != 'E')
	{
		game->str_line[i] = '0';
		game->str_line[i + game->width] = 'P';
		game->counter++;
		ft_printf("%d\n", game->counter);
		print_map(*game);
	}
}

void	move_s(t_game *game)
{
	int	i;

	i = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (game->str_line[i] == 'P')
			break ;
		i++;
	}
	if (game->str_line[i + 1] == 'C')
			game->col_count++;
	if (game->str_line[i + 1] == 'E'
		&& game->col_count == game->num_c)
		victory();
	else if (game->str_line[i + 1] != '1'
		&& game->str_line[i + 1] != 'E')
	{
		game->str_line[i] = '0';
		game->str_line[i + 1] = 'P';
		game->counter++;
		ft_printf("%d\n", game->counter);
		print_map(*game);
	}
}

/*
O mapa é processado como uma linha
*/