/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:38:46 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 15:29:41 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>

char	*ft_filecpy(char *flname)
{
	int		fd;
	char	*cpy;

	if (!(cpy = ft_strnew(546)))
		return (NULL);
	fd = open(flname, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (read(fd, cpy, 546) <= 0)
		return (NULL);
	return (cpy);
}
