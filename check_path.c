/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:04:15 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/06 20:09:57 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_path(t_game *game)
{
	int	i;
    int j;
    int k;

	i = 0;
    j = 0;
    game->pos = 0;
    game->str_line_test = game->str_line;
    ft_printf("%s\n", game->str_line_test);
    while (game->str_line_test[game->pos] != 'P')
        game->pos++;
    k = game->pos;
    while (j < ft_strlen(game->str_line))
    {   
        check_all_dir(game, k);
        if (game->str_line_test[game->pos + 1] == 'P')
            k += 1;
        check_all_dir(game, k);
        j++;
    }
    ft_printf("%s\n", game->str_line_test);
    while (i < ft_strlen(game->str_line_test))
    {
        if (game->str_line_test[i] == 'C')
            ft_error("Map does not have a valid path!\n");
        i++;
    }
    i = 0;
    while (game->str_line_test[i] != 'E')
        i++;
    if (game->str_line_test[i + 1] != 'P'
        && game->str_line_test[i - 1] != 'P'
        && game->str_line_test[i + game->width] != 'P'
        && game->str_line_test[i - game->width] != 'P') 
    ft_error("Map does not have a valid path!\n");
}

/*
check_up(game, k);
check_down(game, k);
check_left(game, k);
check_right(game, k);
*/

void    check_all_dir(t_game *game, int k)
{
    game->pos = k;
	while (game->str_line_test[game->pos - game->width] != '1'
		&& game->str_line_test[game->pos - game->width] != 'E')
    {
		game->str_line_test[game->pos - game->width] = 'P';
        game->pos -= game->width;
    }
    game->pos = k;
    while (game->str_line_test[game->pos + game->width] != '1'
		&& game->str_line_test[game->pos + game->width] != 'E')
	{
        game->str_line_test[game->pos + game->width] = 'P';
        game->pos += game->width;
    }
    game->pos = k;
    while (game->str_line_test[game->pos - 1] != '1'
		&& game->str_line_test[game->pos - 1] != 'E')
    {
		game->str_line_test[game->pos - 1] = 'P';
        game->pos -= 1;
    }
    game->pos = k;
    while (game->str_line_test[game->pos + 1] != '1'
		&& game->str_line_test[game->pos + 1] != 'E')
    {
		game->str_line_test[game->pos + 1] = 'P';
        game->pos += 1;   
    }
}

void    check_up(t_game *game, int k)
{
    game->pos = k;
	while (game->str_line_test[game->pos - game->width] != '1'
		&& game->str_line_test[game->pos - game->width] != 'E')
    {
		game->str_line_test[game->pos - game->width] = 'P';
        game->pos -= game->width;
    }
}

void    check_down(t_game *game, int k)
{
    game->pos = k;
	while (game->str_line_test[game->pos + game->width] != '1'
		&& game->str_line_test[game->pos + game->width] != 'E')
	{
        game->str_line_test[game->pos + game->width] = 'P';
        game->pos += game->width;
    }
}

void    check_left(t_game *game, int k)
{
    game->pos = k;
	while (game->str_line_test[game->pos - 1] != '1'
		&& game->str_line_test[game->pos - 1] != 'E')
    {
		game->str_line_test[game->pos - 1] = 'P';
        game->pos -= 1;
    }
}

void    check_right(t_game *game, int k)
{
    game->pos = k;
	while (game->str_line_test[game->pos + 1] != '1'
		&& game->str_line_test[game->pos + 1] != 'E')
    {
		game->str_line_test[game->pos + 1] = 'P';
        game->pos += 1;   
    }
}