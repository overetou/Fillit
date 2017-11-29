/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:31:37 by overetou          #+#    #+#             */
/*   Updated: 2017/11/29 16:39:49 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static short	ft_check_argc(int argc)
{
	if (argc != 2)
		return (0);
	return (1);	
}

static short	ft_checkfile(char **argv)
{
	if (!argv)
		return (0);
	return (0);
}

short			ft_check(int argc, char **cpy)
{
	int		i;
	if (!ft_check_argc(argc))
	{
		ft_putstr("usage: fillit input_file\n");
		i = ft_checkfile(cpy);
		return (0);
	}
	return(1);
}
