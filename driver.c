
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
//	char *str = "wassup";
  printf("This is a simple test from the in built printf function\n");
  ft_printf("This is another simple test from my printf function\n");
  
  // Testing the integer printing of the printf function.
  ft_putstr("## Testing numbers ##\n");
  printf("%d\n", 100);
  ft_printf("%d\n", 100);


	return (0);
}
