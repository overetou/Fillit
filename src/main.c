/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:25:46 by fchevrey          #+#    #+#             */
/*   Updated: 2017/11/28 18:25:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "fillit.h"

int	main(int argc, char **argv)
{
	if (!ft_check(argc, argv))
		return (0);
	ft_putstr(ft_flcpy(argv[1]));
	return (0);
}
