/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:54:40 by overetou          #+#    #+#             */
/*   Updated: 2017/12/02 17:18:41 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_place_all(char **map, t_tetri *lst, int size)
{
	t_point coord;
	char	**map2;

	coord.x = 0;
	coord.y = 0;
	map2 =ft_mapcpy( map);
	while (coord.x != size)
	{
		if (ft_try_place(map, *lst, coord))
		{
			if (!lst->next || ft_place_all(map2, lst->next, size))
				return (map2);
		}
		coord.y++;
		if (coord.y == size)
		{
			coord.x++;
			coord.y = 0;
		}
	}
	return (0);
}
