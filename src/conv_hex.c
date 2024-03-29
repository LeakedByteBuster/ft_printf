/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 04:40:40 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/02 05:15:04 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#define HEX_BASE "0123456789abcdef"

void	conv_hex(unsigned int x, int *len, int sp)
{
	if (x > 15)
		conv_hex(x / 16, len, sp);
	if (sp == 'X')
		*len += ft_putchar_fd(ft_toupper(HEX_BASE[x % 16]), STDOUT);
	else
		*len += ft_putchar_fd(HEX_BASE[x % 16], STDOUT);
}
