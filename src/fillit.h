/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:59:35 by overetou          #+#    #+#             */
/*   Updated: 2017/11/29 16:36:42 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "../libft/libft.h"

typedef struct	s_trio
{
	char			*l1;
	char			*l2;
	char			*l3;
	char			*l4;
	struct s_trio	*next;
	char			ltr;
}				t_trio;

void	ft_tadd(t_trio **atrio, t_trio *new);
t_trio	*ft_tnew(char *str, char ltr);
char	*ft_flcpy(char *flname);
short	ft_check(char *cpy);
short	ft_check_argc(int argc);

#endif
