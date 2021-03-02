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

  ft_putendl("\t#testing decimals#");
  printf("%d 2j\n", 100);
  ft_printf("%d 2j\n", 100);

  ft_putendl("\t#Testing floating point numbers");
  printf("%f \n", 199.873);
  ft_printf("%f \n", 199.873);

  ft_putendl("\t#Testing the long and long long number#");
  printf("%ld\n", 100000000000l);
  ft_printf("%ld\n", 100000000000l);

  ft_putendl("\t#Testing out the character printing#");
  printf("%c\n", '&');
  ft_printf("%c\n", '&');



	return (0);
}
