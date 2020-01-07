/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:23:02 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/07 15:23:07 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINF_H
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
#endif