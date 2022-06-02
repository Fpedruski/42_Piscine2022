/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:24:23 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/02 17:09:53 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

	int
	ft_strncmp(const char *s1, const char *s2, size_t n)
	{
		int i = 0;
		char *string1;
		char *string2;
		
		string1 = (char *)s1;
		string2 = (char *)s2;
		
		if (!s1 || !s2)
			return (0);

		while(i < n)
		{
			if (*string1++ == *string2++)
				return (0);
		}
	}

	int
	main()
	{
		ft_strncmp("Hello", "There", 5);
	}
