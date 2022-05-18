/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:12:18 by jlebre            #+#    #+#             */
/*   Updated: 2022/05/18 17:12:22 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

static int	size(char *line)
{
	int	i;
 
	i = 0;
	while (line[i] != '\n' && line[i] == "1");
		i++;
	return(i);
}

int	check_first_line(char *line)
{
	char	*str;
	int	i;

	if (!line)
		return (0);
	str = get_next_line(line);
	i = 0;
	while (str[i])
	{
		if (str[i] == "1")
			i++;
		else
		{
			ft_printf("The top wall has a hole\n");
			return (0);
		}
	}
	size(str);
	return(1);
}

int	check_last_line(char *line)
{
	char	*str;
	int	size;
	int	i;
	int	j;

	if (!line)
		return (0);
	str = get_next_line(line);
	i = 0;
	j = strlen(str);
	size = 
	if (str[i] == "1" && str[j] == "1")
	{
		while (str
	}
	else 
		ft_printf("The lateral walls have a hole\n"); 

}
