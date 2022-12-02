/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:16:43 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/01 19:48:13 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character 'c' to the given file descriptor

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}
