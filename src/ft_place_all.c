/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:54:40 by overetou          #+#    #+#             */
/*   Updated: 2017/12/01 16:54:44 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_place_all(char **map, t_tetri *lst, int size)
{
	t_point coord;

	coord.x = 0;
	coord.y = 0;
	while (coord.x != size)
	{
		if (ft_try_place(map, *lst, coord))
		{
			if (lst->next)
				return (ft_place_all(map, lst->next, size));
			return (1);
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
