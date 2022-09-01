/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:38 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 17:42:45 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


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
		victory(game);
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
		victory(game);
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
		victory(game);
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
		victory(game);
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
