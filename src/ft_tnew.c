/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:15:11 by overetou          #+#    #+#             */
/*   Updated: 2017/11/28 19:15:19 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_trio	*ft_tnew(char *str, char ltr)
{
	t_trio *new;

	if (!str)
		return (NULL);
	if ((new = (t_trio *)malloc(sizeof(t_trio *))) == NULL)
		return (NULL);
	new->l1 = ft_strnew(4);
	new->l2 = ft_strnew(4);
	new->l3 = ft_strnew(4);
	new->l4 = ft_strnew(4);
	if (!new->l1 || !new->l2 || !new->l3 || !new->l4)
		return (NULL);
	new->ltr = ltr;
	new->next = NULL;
	return (new);
}
