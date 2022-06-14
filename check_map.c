/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:52 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 20:48:57 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map(t_game *game)
{
	int		i;

	i = 0;
	while (game->str_line[i] != '\0')
	{
		if (game->str_line[i] == 'C')
			game->colectibles++;
		i++;
	}
}

/*
void	check_map(char *map)
{
	int	fd;
	
	fd = open(map, O_DIRECTORY);
	if (fd >= 0)
		ft_error("Argv[1] is not a directory!");
	fd = open(map, O_RDONLY);
	if (fd < 0)
		ft_error("Argv[1] did not opened!");
	if (!ft_strnstr(map, ".ber", 5))
		ft_error(".ber File Required");
	close (fd);
}
*/
