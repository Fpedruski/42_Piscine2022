/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:31:38 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/16 11:39:28 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;

	if (!s)
		return (NULL);
	else
	{
		ptr = (char *)malloc(sizeof (char) + 1);
		strlen = ft_strlen(s);
	}
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && start < len && start < strlen)
		{
			ptr[j] = s[i];
			j++;
		}
		++i;
	}
	ptr[j] = '\0';
	return (ptr);
}
