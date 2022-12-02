/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wr_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:59:37 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/02 04:56:32 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*converting numbers from decimal to hexadecimal*/
void	conv_hex_long(unsigned long x, int *len, int sp)
{
	char	*str;

	if (sp == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (x > 15)
		conv_hex_long(x / 16, len, sp);
	*len += ft_putchar_fd(str[x % 16], 1);
}

long	long	wr_address(unsigned long x)
{
	int	len;

	len = 0;
	len += ft_putstr_fd("0x", 1);
	conv_hex_long(x, &len, 'x');
	return (len);
}
