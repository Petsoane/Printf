/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:18:14 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 15:18:54 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void         process_split(char *split, va_list list)
{
    static t_flags flags;
    char *precision;

    get_flags(split, &flags);
    precision = get_precision(split);
    if (!flags.left_just)
        print_spaces(split);
    if (ft_strchr(split, 'c'))
        print_char(list);
    if (ft_strchr(split, 'd') || ft_strchr(split, 'i'))
        print_int(split, list);
    if (strchr(split, 'u'))
        print_unsigned(list);
    if (ft_strchr(split, 's'))
        print_string(list, precision);
    if (ft_strchr(split, 'x') || ft_strchr(split,'X'))
        print_hex(split, list);
    if (ft_strchr(split, 'o') || ft_strchr(split,'O'))
        print_oct(split, list);
    if (ft_strchr(split, 'p'))
        print_pointer(list);
    if (ft_strchr(split, 'f'))
        print_float(list, precision);
    if (ft_strstr(split, "%%"))
        ft_putchar('%');
    if (flags.left_just == 1)
        print_spaces(split);
}
