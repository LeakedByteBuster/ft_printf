/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 06:11:11 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/29 08:37:34 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_putunbr_fd(unsigned int n, int fd)
{
    int len;
    
    len = 0;
	if (n == 0)
	{
		len = write(fd, "0", 1);
		return (len);
	}
	else if ((long long)n < INT_MIN)
	{
		len += write(fd, "-1", 1);
		return (len);
	}
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n *= -1;
	}	
	if (ft_isdigit(n + '0'))
		len += ft_putchar_fd(n + 48, fd);
	if (n > 9)
	{
		len += ft_putunbr_fd(n / 10, fd);
		len += ft_putunbr_fd(n % 10, fd);
	}
    return (len);
}
