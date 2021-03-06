/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetriadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:13:59 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/01 12:13:29 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_tetriadd(t_tetri **atetri, t_tetri *new)
{
	if (new && atetri)
	{
		new->next = *atetri;
		*atetri = new;
	}
}
