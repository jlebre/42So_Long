/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/03 17:30:19 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err, char **map)
{
	ft_printf("\033[0;31m%s\033[0m", err);
	free (map);
	exit(1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		check(&argv[1]);
	}
	return (0);
}

//argv - map.ber
