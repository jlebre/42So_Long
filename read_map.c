/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:56:13 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/01 18:15:51 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_name(char *map)
{
	int	fd;
	int	len;

	len = ft_strlen(map);
	fd = open(map, O_DIRECTORY);
	if (fd >= 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
		ft_error(".ber File Required!\n");
	fd = open(map, O_RDONLY);
	if (fd < 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
		ft_error(".ber File Required!\n");
	if (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
		|| map[len - 2] != 'e' || map[len - 1] != 'r')
		ft_error(".ber File Required!\n");
	close (fd);
}

void	read_map(char *file, t_game *game)
{
	int		fd;
	char	*line;

	check_map_name(file);
	game->str_line = NULL;
	fd = open(file, O_RDONLY);
	if (fd <= 0)
		ft_error("File failed to open!\n");
	line = get_next_line(fd);
	if (line == NULL || line[0] == '\0')
		ft_error("Empty Map!\n");
	game->height = 0;
	game->width = (ft_strlen(line) - 1);
	while (line)
	{
		game->height++;
		game->str_line = ft_strjoin_without_newline(game->str_line, line);
		line = get_next_line(fd);
	}
	close (fd);
}
