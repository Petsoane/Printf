/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:19:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 13:07:55 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static void print_spaces(char *split)
{
    char *min_width;
    int spaces;

    min_width = get_minFieldWidth(split);
    spaces = ft_atoi(min_width);
    while (spaces--)
        ft_putchar(' ');
}


static void process_split(char *split, va_list list)
{
    static t_flags flags;
    char *precision;

    get_flags(split, &flags);
    precision = get_precision(split);
    if (!precision)
        precision = "0";
    if (!flags.left_just)
        print_spaces(split);
    if (ft_strchr(split, 'c'))
        print_char(list);
    if (ft_strchr(split, 'd') || ft_strchr(split, 'i'))
        print_int(split, list);
    if (strchr(split, 'u'))
        print_unsigned(list);
    if (ft_strchr(split, 's'))
        print_string(list);
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

int ft_printf(const char *str, ...)
{
    char **split = ft_strsplit(str ,' ');
    va_list list;
    va_start(list, str);

    while(*split)
    {
        if (ft_strchr(*split, '%'))
            process_split(*split, list);
        else
            ft_putstr(*split);
        if (*(split + 1) != NULL)
            ft_putchar(' ');
        split++;
    }
    return (0);
}

