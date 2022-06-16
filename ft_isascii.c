/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:13:49 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:05:21 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <ctype.h>

     int
     isascii(int c);

DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character
	 between 0 and decimal 127 inclusive.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
