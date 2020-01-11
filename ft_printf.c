/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:19:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/08 15:33:25 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	char			**split;
	va_list			list;

	va_start(list, str);
	split = ft_strsplit(str, ' ');
	while (*split)
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
