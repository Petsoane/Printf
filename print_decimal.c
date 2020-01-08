/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:42:16 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 12:50:16 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_float(va_list list, char *precision)
{
    float num;
    int prec;

    prec = ft_atoi(precision);
    num = va_arg(list, double);
    if (prec !=  0)
        ft_putfloat(num, prec);
    else
        ft_putfloat(num, 2);
}