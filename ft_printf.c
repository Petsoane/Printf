/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:19:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/06 16:37:06 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *str)
{
    char **split = ft_strsplit(str ,' ');

    while(*split)
    {
        if (ft_strchr(*split, '%'))
        {
            ft_putendl("there is a format in here");
        }
        else
            ft_putendl(*split++);
    }
    return (0);
}
