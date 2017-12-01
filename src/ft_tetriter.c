/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:40:01 by overetou          #+#    #+#             */
/*   Updated: 2017/12/01 15:40:14 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_tetriter(t_tetri *lst, t_tetri *(*f)(t_tetri *, short))
{
	t_tetri	*out;

	out = lst;
	while (lst)
	{
		lst = f(lst, 0);
		lst = lst->next;
	}
	return (out);
}
