/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrinew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:15:11 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 19:20:53 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_tetri	*ft_tetrinew(char **str, char letter)
{
	t_tetri *new;
	int		i;

	if (!str)
		return (NULL);
	if ((new = (t_tetri *)malloc(sizeof(t_tetri))) == NULL)
		return (NULL);
	if ((new->tetri = (char **)malloc(sizeof(char *) * 5)) == NULL)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		if (!(new->tetri[i] = ft_strnew(4)))
			return (NULL);
		ft_strcpy(new->tetri[i], str[i]);
		i++;
	}
	new->ltr = letter;
	new->tetri[i] = NULL;
	new->next = NULL;
	return (new);
}
