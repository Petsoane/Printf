/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:40:30 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/11 09:03:59 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_precision(char *split)
{
	char		*period;
	static char	num[2049];
	int			i;

	i = 0;
	period = ft_strchr(split, '.');
	if (!period)
		return ("0");
	period++;
	while (ft_isdigit(*period))
	{
		num[i++] = *period++;
	}
	num[i] = '\0';
	if (i == 0)
		return ("0");
	return (num);
}
