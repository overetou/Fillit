/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bc_pt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:36:08 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/03 14:58:11 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_point	ft_div_pt(t_point crd1, t_point crd2, char operation)
{
	t_point		result;

	result.x = -2147483648;
	result.y = -2147483648;
	if (operation == '/')
	{
		result.x = crd1.x / crd2.x;
		result.y = crd1.y / crd2.y;
	}
	else if (operation == '%')
	{
		result.y = crd1.y % crd2.y;
		result.x = crd1.x % crd2.x;
	}
	return (result);
}

t_point			ft_bc_pt(t_point crd1, t_point crd2, char operand)
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
