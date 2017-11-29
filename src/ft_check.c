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

static short	ft_check_argc(int argc)
{
	if (argc != 2)
		return (0);
	return (1);	
}

static short	ft_checkfile(char **argv)

short			ft_check(int argc, char *cpy)
{
	if (!ft_check_argc(argc))
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	return(1);
}
