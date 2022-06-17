/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_newline.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:37:19 by marvin            #+#    #+#             */
/*   Updated: 2022/06/12 13:37:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_remove_newline(char *str)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_str = malloc(sizeof(char) * (ft_strlen(str) - counter(str) + 1));
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		if (str[i] != '\0')
		{
			new_str[j] = str[i];
			i++;
			j++;
		}
	}
	new_str[j] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char    *str1;
    char    *str2;
    char    *str3;

    str1 = "ABCDEF";
    str2 = "ABCDEF\n";
    str3 = "A\nB\nC\nD\nE\nF\n";
    printf("STR1:%s\n%s\n", str1, ft_remove_newline(str1));
    printf("STR2:%s\n%s\n", str2, ft_remove_newline(str2));
    printf("STR3:%s\n%s\n", str3, ft_remove_newline(str3));
    return (0);
}
*/