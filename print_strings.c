/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:25:41 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 12:27:04 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_string(va_list list)
{
    char *str;

    str = va_arg(list, char *);
    ft_putstr(str);
}