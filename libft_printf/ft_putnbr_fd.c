/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:16:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/02 05:21:16 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer n to the given file descriptor

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
	{
		len += write(fd, "-2147483648", 11);
		return (len);
	}
	else if ((long long)n < INT_MIN)
		return ((len += write(fd, "-1", 1)), len);
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n *= -1;
	}	
	if (ft_isdigit(n + '0'))
		len += ft_putchar_fd(n + 48, fd);
	if (n > 9)
	{	
		len += ft_putnbr_fd(n / 10, fd);
		len += ft_putnbr_fd(n % 10, fd);
	}
	return (len);
}
