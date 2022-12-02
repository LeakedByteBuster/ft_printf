/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:25:36 by mfouadi           #+#    #+#             */
/*   Updated: 2022/12/02 05:22:58 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate a character in the given string
// Segfault when s == NULL 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s));
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
