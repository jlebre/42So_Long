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
	if (keycode == KEY_W)
		move_w(game);
	else if (keycode == KEY_A)
		move_a(game);
	else if (keycode == KEY_D)
		move_d(game);
	else if (keycode == KEY_S)
		move_s(game);
	else if (keycode == KEY_ESC)
		exit (0);
	ft_printf("Colectibles: %d\n", game->col_count);
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
		&& game->width == game->col_count)
		ft_printf("Clear_game!\n");
		//clear_game(game);
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

/*
    Enquanto i for inferior ao tamanho da linha i++;
    O valor de i, vai ser igual ao da Width;
*/

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
		&& game->width == game->col_count)
		ft_printf("Clear_game");
		//clear_game(game);
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
		&& game->width == game->col_count)
		ft_printf("Clear_game");
		//clear_game(game);
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
		&& game->width == game->col_count)
		ft_printf("Clear_game");
		//clear_game(game);
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
