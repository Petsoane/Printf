/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 09:49:04 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/07 15:19:43 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putfloat(double num, int precision)
{
	long		base;
	float		fract;
	int 		prec;

	prec = 1;
	while (precision--)
	{
		prec *= 10;
	}

	base = (int)num;
	fract = (num - (double)base) * prec; 
	ft_putnbr(base);
	ft_putchar('.');
	ft_putnbr(fract);
}
