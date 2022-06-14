/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:22:21 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 22:28:15 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *err)
{
	ft_printf("\033[0;31mError\n%s\033[0m", err);
	exit(0);
}

void	victory(void)
{
	ft_green("You Won!\n");
	exit (0);
}

/*
static int	ft_exit(t_game game)
{
	ft_green("Game exited sucessfully!\n");
	exit (0);
}
*/