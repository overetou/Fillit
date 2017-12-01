/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:59:35 by overetou          #+#    #+#             */
/*   Updated: 2017/12/01 16:35:44 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "../libft/libft.h"

typedef struct	s_tetri
{
	char			**tetri;
	struct s_tetri	*next;
	char			ltr;
}				t_tetri;

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

void			ft_tetriadd(t_tetri **atetri, t_tetri *new);
t_tetri			*ft_tetrinew(char **str, char ltr);
char			*ft_filecpy(char *flname);
short			ft_check(char *cpy);
char			**ft_mapnew(int size);
void			ft_mapdel(char ***map);
t_tetri			*ft_fill_list(char **src);
void			ft_tetriprint(t_tetri *list);
t_tetri			*ft_tetrifind(t_tetri *src, char letter);
t_tetri			*ft_movetetri(t_tetri *link);
void			ft_tetridelone(t_tetri **a_supp);
void			ft_tetridel(t_tetri **lst);
int				ft_try_place(char **map, t_tetri to_place, t_point crd);

#endif
