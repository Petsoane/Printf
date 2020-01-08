
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 07:52:10 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/07/12 13:00:59 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	/* Dont forget to fix the workings of the float conversion. */
	char *str = "wassup";
	ft_printf("Hello worlduu of %12.8c %s %p %1.2lf %u", 'v', "Hello world", str, 10.45, 15);
	printf("\n%llf %ld", 10.89, 19);
	printf("\nBuiltin: %p", str);

	return (0);
}