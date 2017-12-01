/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:17:02 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/01 18:23:26 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_mapdel(char ***map)
{
	char	**todel;
	int		i;

	i = 0;
	if (map)
	{
		todel = *map;
		while (todel[i])
		{
			free(todel[i]);
			todel[i] = NULL;
			i++;
		}
		free(*map);
		*map = NULL;
	}
}
