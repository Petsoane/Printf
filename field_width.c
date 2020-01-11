/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:45:39 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/11 08:56:52 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_str(char *split, int has_digit)
{
	int			i;
	static char	num[2099];

	i = 0;
	if (!has_digit)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	else
	{
		while (ft_isdigit(*split))
			num[i++] = *split++;
		num[i] = '\0';
	}
	return (num);
}

char	*get_minfieldwidth(char *split)
{
	int			is_first;
	int			has_digit;

	has_digit = 0;
	is_first = 0;
	while (*split)
	{
		if (*split == '.')
			break ;
		if (ft_isdigit(*split))
		{
			has_digit = 1;
			if (*split == '0' && is_first == 0)
				is_first = 1;
			else
				break ;
		}
		split++;
	}
	return (get_str(split, has_digit));
}
