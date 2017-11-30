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

t_trio		*ft_fill_list(char **src)
{
	t_trio		*out;
	t_trio		*new;
	char		ltr;

	ltr = 'A';
	new = (ft_trionew(src, ltr));
	out = new;
	while (*(src + 5))
	{
		ltr++;
		src += 4;
		new->next = ft_trionew(src, ltr);
		new = new->next;
	}
	return (out);
}
