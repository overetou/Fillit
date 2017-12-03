/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 15:44:33 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/03 15:45:17 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_point	ft_div_pt(t_point crd1, t_point crd2, char operand)
{
	t_point		result;

	result.x = -2147483648;
	result.y = -2147483648;
	if (operand == '/')
	{
		result.x = crd1.x / crd2.x;
		result.y = crd1.y / crd2.y;
	}
	else if (operand == '%')
	{
		result.y = crd1.y % crd2.y;
		result.x = crd1.x % crd2.x;
	}
	return (result);
}

t_point			ft_pt_op(t_point crd1, t_point crd2, char operand)
{
	t_point		result;

	result.x = -2147483648;
	result.y = -2147483648;
	if (operand == '-')
	{
		result.x = crd1.x - crd2.x;
		result.y = crd1.y - crd2.y;
	}
	else if (operand == '+')
	{
		result.x = crd1.x + crd2.x;
		result.y = crd1.y + crd2.y;
	}
	else if (operand == '*')
	{
		result.x = crd1.x * crd2.x;
		result.y = crd1.y * crd2.y;
	}
	else if (operand == '%' || operand == '%')
		result = ft_div_pt(crd1, crd2, operand);
	return (result);
}
