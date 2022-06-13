/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:24:23 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/13 19:06:12 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*string1;
	char		*string2;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	if (!s1 || !s2 || n < 0)
		return (-1);
	while (i < n)
	{
		if (*string1++ == *string2++)
			return (0);
		else
			return (-1);
	}
	return (0);
}
/*
	int
	main()
	{
		ft_strncmp("Hello", "There", 5);
	}
*/
