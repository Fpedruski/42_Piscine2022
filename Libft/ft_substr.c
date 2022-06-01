/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:31:38 by Switcher          #+#    #+#             */
/*   Updated: 2022/06/01 12:15:55 by Switcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;
	size_t j;
	
	ptr = (char *)malloc(sizeof(*s) * (len + 1));

	if (!ptr)
		return (NULL);

	i = 0;
	j = 0;

	while(s[i])
	{
		if(i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		
		++i;
	}
	ptr[j] = 0;
	return (ptr);
}
/*
int	main()
{
	char *str = "Hello";

	printf("%s", ft_substr(str, 0, 4));
}
*/
