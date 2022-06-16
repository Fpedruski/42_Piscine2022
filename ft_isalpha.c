/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:59:52 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:02:51 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <ctype.h>

     int
     isalpha(int c);

DESCRIPTION
   The is alpha() function checks if there is any character alphanumeric 
   from 65 to 90 and 97 to 122 of the ASCII set in decimal

RETURN VALUES
   The isalpha() function returns zero if the character tests false and
   returns non-zero if the charac-ter tests true.
*/
#include "libft.h"

int	ft_isalpha(int i)
{
	return ((i >= 65 && i <= 90) || (i >= 97 && i <= 122));
}
