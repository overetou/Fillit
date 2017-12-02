/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:54:40 by overetou          #+#    #+#             */
/*   Updated: 2017/12/02 17:26:43 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_tabcpy(char **dest, char **src)
{
	int i = 0;

	while (src[i])
	{
		ft_strcpy(dest[i], src[i]);
		i++;
	}
}

int	ft_place_all(char **map, t_tetri *lst, int size)
{
	t_point coord;
	char	**map2;

	map2 = ft_mapcpy(map);
	coord.x = 0;
	coord.y = 0;
	while (coord.x != size)
	{
		if (ft_try_place(map2, *lst, coord))
		{
			if (!lst->next)
			{
				ft_tabprint(map2);
				ft_tabcpy(map, map2);
				ft_mapdel(&map2);
				return (1);
			}
			if (ft_place_all(map2, lst->next, size))
				return (1);
			ft_tabcpy(map2, map);
		}
		coord.y++;
		if (coord.y == size)
		{
			coord.x++;
			coord.y = 0;
		}
	}
	ft_mapdel(&map2);
	return (0);
}
