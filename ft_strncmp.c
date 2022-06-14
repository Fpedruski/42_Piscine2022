/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:24:23 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/14 13:16:48 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*string1;
	char		*string2;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	if ((s1[0] == '\0' && s2[0] == '\0') || n == 0)
		return (0);
	else if (strlen(s1) == strlen(s2))
	{
		while (i < n)
		{
			if (*string1++ < *string2++)
				return (-1);
			else if (*string1++ == *string2++)
				return (0);
			else
				return (1);
		}
	}
	else if (strlen(s1) > strlen(s2) && n > 0)
		return (1);
	else if (strlen(s2) > strlen(s1) && n > 0)
		return (-1);
	return (0);
}
/*
	int
	main()
	{
		printf("%d", ft_strncmp("", "There", 5));
	}
*/
