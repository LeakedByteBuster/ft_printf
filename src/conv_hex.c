/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 04:40:40 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/01 20:00:40 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void conv_hex(unsigned int x, int *len, int sp)
{
    char *str;
    if (sp == 'x')
        str = "0123456789abcdef";
    else
        str = "0123456789ABCDEF";
    if (x > 15)
        conv_hex(x / 16 , len, sp);
    *len += ft_putchar_fd(str[x % 16], 1);
}

// if (sp == 'X')
// 		while (i-- >= 0 && res[i] != '\0')
// 			ft_putchar_fd(ft_toupper(res[i]), 1);
// 	else
// 		while (i-- >= 0 && res[i] != '\0')
// 			ft_putchar_fd(res[i], 1);
// 	return (res);
