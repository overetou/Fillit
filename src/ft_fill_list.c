/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:05:35 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/30 19:21:39 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_fill_list(char **src)
{
	t_tetri		*out;
	t_tetri		*new;
	char		ltr;

	ltr = 'A';
	new = (ft_tetrinew(src, ltr));
	out = new;
	while (*(src + 5))
	{
		ltr++;
		src += 4;
		new->next = ft_tetrinew(src, ltr);
		new = new->next;
	}
	return (ft_movetetri(out, 0));
}
