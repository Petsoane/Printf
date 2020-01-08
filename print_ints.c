/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:59:21 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 12:22:44 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_char(va_list list)
{
    char c = va_arg(list, int);
    ft_putchar(c);
}

void print_int(char *split, va_list list)
{
    long double num;
    char *end;
    short int a;
    long b;
    int c;


    num = va_arg(list, long double);
    if (ft_strchr(split, 'h'))
    {
        a = (short int)num;
        num = a;
    }
    if (!ft_strstr(split, "ll"))
    {
        c = (int)num;
        num = c;
        end = "";
    }
    if (ft_strchr(split, 'l'))
    {
        b = (long int)num;
        num = b;
        end = "l";
    }
    ft_putnbr(num);
    ft_putstr(end);
}

void print_unsigned(va_list list)
{
    unsigned int num;

    num = va_arg(list, unsigned int);
    ft_putnbr(num);
}