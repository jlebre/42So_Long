/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:34:45 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/09 17:22:52 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3
# define KEY_ESC				53
# define KEY_W					13
# define KEY_A					0
# define KEY_D					1
# define KEY_S					2

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"

//CREATE A STRUCT TO DEFINE X AND Y AS PARAMETERS
typedef struct s_param
{
	int	x;
	int	y;
}	t_param;

//ERROR
void	ft_error(char *err);

//MAP DIMENSIONS
int		map_width(char **map);
int		map_height(char **map);

//CHECK MAP WALLS
//void	*check_map(char *map);
void	check(char **map);

//CREATE MAP
void	create_map(char **map);

//COLORS
int		ft_red(char *str);
int		ft_green(char *str);
int		ft_yellow(char *str);

#endif