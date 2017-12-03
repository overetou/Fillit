/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:43:15 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/03 16:09:41 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>

char	**ft_mapnew(int size)
{
	char	**map;
	int		i;
	int		j;

	if (!(map = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	map[size] = NULL;
	i = size;
	while (i--)
		if (!(map[i] = ft_strnew(size)))
			return (NULL);
	i = -1;
	while (map[++i])
	{
		j = -1;
		while (++j < size)
			map[i][j] = '.';
	}
	return (map);
}
