/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:03:36 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/15 15:06:46 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned	char str_len(char *src);

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int j;

	i = 0;
	while  (src[i] != src[size]) 
	{
		dest[i] = src[i];
		i++;
	}
	
	j = i;
	while (src[i] > src[j])
	{
		dest[j] = 'x';
		j++;
	}
	return (i);
}
