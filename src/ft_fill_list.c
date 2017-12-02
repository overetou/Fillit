/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:05:35 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/02 17:20:06 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_fill_list(char **src)
{
	t_tetri		*out;
	t_tetri		*new;
	char		ltr;
	void		*f;
	int			i;

	f = &(ft_movetetri);
	ltr = 'A';
	if (!(new = (ft_tetrinew(src, ltr))))
		return (NULL);
	out = new;
	while (*(src + 4))
	{
		ltr++;
		new->next = ft_tetrinew(src, ltr);
		new = new->next;
	}
	return (ft_tetriter(out, f));
}
