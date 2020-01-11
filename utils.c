/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:11:44 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/11 08:42:15 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void         print_spaces(char *split)
{
    char *min_width;
    int spaces;

    min_width = get_minfieldwidth(split);
    spaces = ft_atoi(min_width);
    while (spaces--)
        ft_putchar(' ');
}
