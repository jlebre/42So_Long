/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:56:13 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/11 21:26:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	read_map(char *file, t_game *game)
{
	int		fd;
	char	*line;
	
	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	game->height = 0;
	game->width = (ft_strlen(line) - 1);
	game->str_line = ft_strdup_without_newline(line);
	free(line);
	while (line)
	{
		game->height++;
		line = get_next_line(fd);
		if (line)
			game->str_line = ft_strjoin_without_newline(game->str_line, line);
	}
	close (fd);
	ft_printf("%s\n", game->str_line);
}
