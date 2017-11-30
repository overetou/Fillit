/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:25:46 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/29 20:12:41 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "fillit.h"

short			ft_check_argc(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*cpy;
	char	**map;

	if (!ft_check_argc(argc))
		return (0);
	if (!(cpy = ft_flcpy(argv[1])) || !ft_check(cpy))
	{
		ft_putstr("error\n");
		return (0);
	}
	map = ft_mapnew(5);
	ft_tabprint(map);
	ft_mapdel(&map);
	ft_putchar('n');
	ft_tabprint(map);
	return (0);
}
