/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:53:53 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:16:40 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     #include <string.h>

     size_t
     strlen(const char *s);

     size_t
     strnlen(const char *s, size_t maxlen);

DESCRIPTION
     The strlen() function computes the length of the string s. The strnlen() 
	 function attempts to compute the length of string, but never scans beyond.

RETURN VALUES
     The strlen() function returns the length of thr characters that precede 
	 the terminating NUL character.
*/
#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
