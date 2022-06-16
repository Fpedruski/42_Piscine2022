/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:57:27 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 10:56:47 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <ctype.h>

     int
     isdigit(int c);

DESCRIPTION
     The isdigit() function tests for a decimal digit character.

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

     The value of the argument must be representable as an unsigned char 
	 or the value of EOF.

RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests 
	 false and return non-zero if the character tests true.

     Using the return directly show if the parameter asked to verify is false
	 or true, 0 or !0.
*/
#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= 48 && i <= 57);
}
