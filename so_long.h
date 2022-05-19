/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:34:45 by jlebre            #+#    #+#             */
/*   Updated: 2022/05/19 17:52:42 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"
# include "printf/ft_printf.h"
# include "libft/libft.h"

//ERROR
void	error(char *err, char **map);

//MAP DIMENSIONS
int		map_width(char **map);
int		map_height(char **map);

//CHECK MAP WALLS
void	check(char **map);

#endif