/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:23:02 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 15:19:07 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
#   define FTPRINTF_H
#   include <stdlib.h>
#   include <unistd.h>
#   include "libft/libft.h"
#   include <stdarg.h>

typedef struct      s_type
{
    int             left_just;
    int             padded;
}                   t_flags;

char                *get_precision(char *split);
char                *get_minFieldWidth(char *split);
void                get_flags(char *split, t_flags *flags);
int                 ft_printf(const char *, ...);
void                print_char(va_list list);
void                print_int(char *split, va_list list);
void                print_unsigned(va_list list);
void                print_string(va_list list, char *precision);
void                print_hex(char *split, va_list list);
void                print_oct(char *split, va_list list);
void                print_pointer(va_list list);
void                print_float(va_list list, char *precision);
void                print_spaces(char *split);
void                process_split(char *split, va_list list);

#endif