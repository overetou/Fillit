/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:31:37 by overetou          #+#    #+#             */
/*   Updated: 2017/11/28 20:31:47 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

short	ft_check_argc(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

short	ft_countbs(char *cpy)
{
	unsigned int	pts;
	unsigned int	htgs;
	unsigned int	endl;

	while (cpy++)
	{
		if (*cpy != '.' && *cpy != '#' &&)
		if (*cpy == '.')
			pts++;
		if (*cpy == '#')
			htgs++;
		if (*cpy == '\n')
		{
			endl++;
			if ((pts + htgs) % 5)
		}
	}
}

short	ft_check(int argc, char *cpy)
{
	ft_countbs(cpy);
	return(1);
}
