/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:25:46 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/30 19:21:15 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "fillit.h"

static short	ft_check_argc(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	return (1);
}

int				main(int argc, char **argv)
{
	char	*cpy;
	t_trio	*lst;

	if (!ft_check_argc(argc))
		return (0);
	if (!(cpy = ft_filecpy(argv[1])) || !ft_check(cpy))
	{
		ft_putstr("error\n");
		return (0);
	}
	lst = ft_fill_list(ft_strsplit(cpy, '\n'));
	ft_trioprint(lst);
	return (0);
}
