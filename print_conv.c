/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:29:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 12:40:18 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_hex(char *split, va_list list)
{
    long int hex;

    hex = va_arg(list, long int);
    if (ft_strchr(split, 'X') || ft_strchr(split, 'x'))
        ft_putstr("0x");
    ft_baseconv(hex, 16);
}


void    print_oct(char *split, va_list list)
{
    long int oct;

    oct = va_arg(list, long int);
    if (ft_strchr(split, '#'))
        ft_putstr("0");
    ft_baseconv(oct, 8);
}

void    print_pointer(va_list list)
{
    void *pointer;

    pointer = va_arg(list, void *);
    ft_putstr("0x10");
    ft_baseconv((unsigned int) pointer, 16);
}