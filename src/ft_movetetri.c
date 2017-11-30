/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movetetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 20:38:53 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 20:38:58 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_movetetri(t_tetri *link)
{
	short x;
	short y;
	short coord_up[2];
	//short coord_left[2];

	x = 0;
	y = 0;
	while (link->tetri[x][y] != '#')
	{
		if (y == 3)
		{
			x++;
			y = 0;
		}
		y++;
	}
	coord_up[0] = x;
	coord_up[1] = y;
	ft_putnbr(coord_up[0]);
	ft_putstr(", ");
	ft_putnbr(coord_up[1]);
	return (link);
}
