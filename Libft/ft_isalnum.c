/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:35:26 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:01:48 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <ctype.h>

     int
     isalnum(int c);

DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3)
	 or isdigit(3) is true.
   	 The value of the argument must be representable as an unsigned char or 
	 the value of EOF.

     In the ASCII character set, this includes the following characters 
	 (preceded by their numeric val-ues, in octal):

RETURN VALUES
     The isalnum() function returns zero if the character tests false 
	 and returns non-zero if the charac-ter tests true.
*/
#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}
