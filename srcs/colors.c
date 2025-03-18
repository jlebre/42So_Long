/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:24:00 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/03 17:30:19 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_red(char *str)
{
	return (ft_printf("\033[0;31m%s\033[0m", str));
}

int	ft_green(char *str)
{
	return (ft_printf("\033[0;32m%s\033[0m", str));
}

int	ft_yellow(char *str)
{
	return (ft_printf("\033[0;33m%s\033[0m", str));
}
