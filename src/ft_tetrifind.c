/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrifind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 21:02:11 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/30 21:20:37 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_tetrifind(t_tetri *src, char letter)
{
	t_tetri		*out;

	out = src;
	while (out)
	{
		if (out->ltr == letter)
			return (out);
		out = out->next;
	}
	return (NULL);
}
