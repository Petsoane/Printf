/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:32:09 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/06 16:31:54 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;
	char	**out;

	i = 0;
	words = 0;
	if (!s)
		return (NULL);
	out = (char **)malloc(sizeof(char *) * ((ft_wordcount(s, c) + 1)));
	if (!out)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			out[words++] = ft_strndup(s + j, i - j);
	}
	out[words] = NULL;
	return (out);
}
