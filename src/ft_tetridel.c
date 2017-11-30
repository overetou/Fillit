/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetridel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 21:27:47 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/30 22:06:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void		ft_tetridel(t_tetri **lst)
{
	t_tetri		*next;
	t_tetri		*tempo;

	if (lst)
	{
		next = *lst;
		while (next)
		{
			tempo = next;
			next = tempo->next;
			ft_tetridelone(&tempo);
		}
		*lst = NULL;
	}
}
