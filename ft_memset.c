/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:32:53 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:23:37 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <string.h>

     void *
     memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.

*/
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t i)
{
	unsigned char	*str;

	str = (unsigned char *)dest;
	while (i-- > 0)
	{
		*(str++) = (unsigned char)ch;
	}
	return (dest);
}
