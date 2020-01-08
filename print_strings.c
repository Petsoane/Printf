/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:25:41 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 13:59:22 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_string(va_list list, char *precision)
{
    char        *str;
    long int    prec;

    prec = ft_atoi(precision);
    str = va_arg(list, char *);
    if (prec == 0)
        ft_putstr(str);
    else
        while (prec--)
            ft_putchar(*str++); 
}