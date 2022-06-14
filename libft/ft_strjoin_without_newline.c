/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_without_newline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:32:39 by marvin            #+#    #+#             */
/*   Updated: 2022/06/11 20:32:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_without_newline(char const *s1, char const *s2)
{
	char	*str;
	char	*str1;
	char	*str2;

	if (!s1 || !s2)
		return (NULL);
	str1 = ft_remove_newline((char *)s1);
	str2 = ft_remove_newline((char *)s2);
	str = ft_strjoin((const char *)str1, (const char *)str2);
	return (str);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main (void)
{
    char    *str1 = "ABCDEF";
    char    *str2 = "GHIJKL";
    ft_printf("STR1: %s\nSTR2: %s\nSTR: %s", str1, str2,
		ft_strjoin_without_newline(str1, str2));
    return (0);
}
*/
