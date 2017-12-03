/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:54:40 by overetou          #+#    #+#             */
/*   Updated: 2017/12/02 20:16:12 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_tabcpy(char **dest, char **src)
{
	int i;

	i = 0;
	while (src[i])
	{
		ft_strcpy(dest[i], src[i]);
		i++;
	}
}

t_point			ft_cplus(t_point coord, int max)
{
	coord.y++;
	if (coord.y == max)
	{
		coord.x++;
		coord.y = 0;
	}
	return (coord);
}

int				ft_place_all(char **map, t_tetri *lst, int size)
{
	t_point coord;
	char	**map2;

	if (!(map2 = ft_mapcpy(map)))
		return (1);
	coord.x = 0;
	coord.y = 0;
	while (coord.x != size)
	{
		if (ft_try_place(map2, *lst, coord))
		{
			if (!lst->next)
			{
				ft_tabprint(map2);
				ft_mapdel(&map2);
				return (1);
			}
			if (ft_place_all(map2, lst->next, size))
				return (1);
			ft_tabcpy(map2, map);
		}
		coord = ft_cplus(coord, size);
	}
	ft_mapdel(&map2);
	return (0);
}
