/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:03:46 by Switcher          #+#    #+#             */
/*   Updated: 2022/06/16 10:46:18 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(s1) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		while (set[j] != s1[i])
		{
			ptr[i] = s1[i];
		j++;
		}
	i++;
	}
	return (ptr);
}
