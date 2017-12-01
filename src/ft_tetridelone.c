/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetridelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 21:41:37 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/01 12:16:02 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void	ft_tetridelone(t_tetri **a_supp)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		free(a_supp[0]->tetri[i]);
		a_supp[0]->tetri[i] = NULL;
		i++;
	}
	free(a_supp[0]->tetri);
	ft_memdel((void *)a_supp);
	*a_supp = NULL;
}
