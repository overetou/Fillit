/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:49:57 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/02 16:58:52 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

char	**ft_mapcpy(char **src)
{
	char	**cpy;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	if (!(cpy = (char **)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		if (!(cpy[i] = ft_strdup(src[i])))
			return (NULL);
		i++;
	}
	cpy[i] = NULL;
	return (cpy);
}
