/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:59:35 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 16:30:43 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "../libft/libft.h"

typedef struct	s_trio
{
	char			**trio;
	struct s_trio	*next;
	char			ltr;
}				t_trio;

void			ft_trioadd(t_trio **atrio, t_trio *new);
t_trio			*ft_trionew(char **str, char ltr);
char			*ft_filecpy(char *flname);
short			ft_check(char *cpy);
char			**ft_mapnew(int size);
void			ft_mapdel(char ***map);
t_trio		*ft_fill_list(char **src);
void	ft_trioprint(t_trio *list);

#endif
