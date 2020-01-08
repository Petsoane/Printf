/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:43:16 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 11:44:50 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void get_flags(char *split, t_flags *flags)
{
    char *padd;

    if (ft_strchr(split, '-'))
    {
        flags->left_just = 1;
    }
    if ((padd = ft_strchr(split, '0')))
    {
        if (!ft_isdigit( *(padd - 1)))
            flags->padded = 1;
    }
}