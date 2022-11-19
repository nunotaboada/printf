/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:45:14 by nmoreira          #+#    #+#             */
/*   Updated: 2022/11/13 15:45:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_printformat(va_list args, const char f)
{
    int plen;

    plen = 0;
    if (f == 'c')
        plen = ft_printchar(va_arg(args, int));
    if (f == 's')
        plen = ft_printstr(va_arg(args, char *));
    if (f == 'p')
        plen = ft_printptr(va_arg(args, void *));
    if (f == 'd' || f == 'i')
        plen = ft_printnbr(va_arg(args, int));
    if (f == 'u')
        plen = ft_printuint(va_arg(args, unsigned int));
    if (f == 'x' || f == 'X')
        plen = ft_printhex(va_arg(args, unsigned int), f);
    if (f == '%')
        plen = ft_printperc();
    return (plen);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int plen;
    int i;

    plen = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            plen += ft_printformat(args, str[i + 1]);
            i++;
        }
        else
        {
            plen += ft_printchar(str[i]);
        }
        i++;        
    }
    va_end(args);
    return (plen);
}
