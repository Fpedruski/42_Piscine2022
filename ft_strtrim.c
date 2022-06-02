/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:03:46 by Switcher          #+#    #+#             */
/*   Updated: 2022/06/02 16:04:34 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;

	int i;

	i = 0;
	ptr = (char*)malloc(sizeof(s1) + 1);
	if (!ptr)
		return (NULL);

	while(s1[i] != '\0')
	{
		if ()
		ptr[i] = s1[i];
		i++;
	}

	return (ptr);
}

int main()
{
	printf(" Hallo %s \n", ft_strtrim("Hello", "H"));
}
