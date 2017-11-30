/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:15:11 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 15:41:03 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_trio	*ft_trionew(char **str, char ltr)
{
	t_trio *new;
	int		i;

	if (!str)
		return (NULL);
	if ((new = (t_trio *)malloc(sizeof(t_trio *))) == NULL)
		return (NULL);
	if ((new->trio = (char **)malloc(sizeof(char *) * 5)) == NULL)
	i = 0;
	while (i < 4)
	{
		if (!(new->trio[i] = ft_strnew(4)))
			return (NULL);
		ft_strcpy(new->trio[i], str[i]);
		i++;
	}
	new->trio[i] = NULL;
	new->ltr = ltr;
	new->next = NULL;
	return (new);
}
