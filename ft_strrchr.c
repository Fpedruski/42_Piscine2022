/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:41:34 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/15 17:47:11 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*result;
	size_t	i;

	result = (char *)str;
	i = 0;
	while (result[i] != '\0')
	{	
		i++;
	}
	if (result[i] == '\0')
	{
		while (result[i] != (char)ch && i > 0)
		{
			i--;
		}
		if (result[i] == (char)ch)
		{
			return (&result[i]);
		}
	}
	return (0);
}
