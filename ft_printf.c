/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <lpetsoan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:19:18 by lpetsoan          #+#    #+#             */
/*   Updated: 2020/01/07 15:18:24 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *str, ...)
{
    char **split = ft_strsplit(str ,' ');
    static t_flags flags;
    va_list list;
    va_start(list, str);

    while(*split)
    {
        if (ft_strchr(*split, '%'))
        {
            get_flags(*split, &flags);
            char *precision = get_precision(*split);
            char *min_width = get_minFieldWidth(*split); 


            if (!flags.left_just)
            {
                int spaces = ft_atoi(min_width);
                while (spaces--)
                    ft_putchar(' ');
            }
            if (!precision)
            {
                precision = "0";
            }
            if (ft_strchr(*split, 'c'))
            {
                char c = va_arg(list, int);
                ft_putchar(c);
            }
            if (ft_strchr(*split, 'd') || ft_strchr(*split, 'i'))
            {
                long double num = va_arg(list, int);
                char *end = "";

                if (ft_strchr(*split, 'h'))
                {
                    short int a = num;
                    num = a;
                }
                if (ft_strstr(*split, "ll"))
                {
                    long double a = num;
                    end = "ll";
                    num = a;
                }
                if (ft_strchr(*split, 'l'))
                {
                    long a = num;
                    num = a;
                    end = "l";
                }
                ft_putnbr(num);
                ft_putstr(end);
            }
            if (strchr(*split, 'u'))
            {
                unsigned int num = va_arg(list, int);
                ft_putnbr(num);
            }
            if (ft_strchr(*split, 's'))
            {
                char *str = va_arg(list, char *);
                ft_putstr(str);
            }
            if (ft_strchr(*split, 'x') || ft_strchr(*split,'X')){
                ft_putendl("Convert to hex");
                if (strchr(*split, '#'))
                    ft_putstr("0x");
                int hex = va_arg(list, int);
                ft_baseconv(hex, 16);

            }
            if (ft_strchr(*split, 'o') || ft_strchr(*split,'O')){
                ft_putendl("Convert to oct");
                if (ft_strchr(*split, '#'))
                    ft_putstr("0");
                int oct = va_arg(list, int);
                ft_baseconv(oct, 8);

            }
            if (ft_strchr(*split, 'p'))
            {
                void *pointer = va_arg(list, void *);
                ft_putstr("0x10");
                ft_baseconv((unsigned int) pointer, 16);
            }
            if (ft_strchr(*split, 'f'))
            {
                float num = va_arg(list, double);
                int prec = ft_atoi(precision);
                if (prec != 0) 
                    ft_putfloat(num ,prec);
                else 
                    ft_putfloat(num, 2);
            }
            if (ft_strstr(*split, "%%"))
            if (flags.left_just == 1)
            {
                int spaces = ft_atoi(min_width);
                
                while (spaces--)
                    ft_putchar(' ');
            }
        }
        else
            ft_putstr(*split);
        if (*(split + 1) != NULL)
            ft_putchar(' ');
        split++;
    }
    return (0);
}

char *get_precision(char *split)
{
    char *period;
    static char num[2049];
    int i;

    i = 0;
    period = ft_strchr(split, '.');

    if (!period)
        return (NULL);
    period++;
    while (ft_isdigit(*period)){
        num[i++] = *period++;
    }
    num[i] = '\0';
    if (i == 0)
        return (NULL);
    return (num);
}


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

char *get_minFieldWidth(char *split)
{
    int is_first = 0;
    int has_digit = 0;
    static char num[2099];
    int i = 0;

    while (*split)
    {
        if (*split == '.')
            break;
        if (ft_isdigit(*split))
        {
            has_digit = 1;
            if (*split == '0' && is_first == 0)
                is_first = 1;
            else
            {
                break;
            }

        }
        split++;
    }

    if (!has_digit)
    {
        num[0] = '0';
        num[1] = '\0';
    }
    else
    {
        while (ft_isdigit(*split))
        {
            num[i++] = *split++;
        }
        num[i] = '\0';
    }
    return (num);
}