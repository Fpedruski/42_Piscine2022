/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:31:38 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/15 13:46:06 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	if ((int)s < 1)
	{
		ptr = (char *)malloc(sizeof(char) * (len + 1));
	}
	else
		ptr = (char *)malloc(sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		++i;
	}
	ptr[j] = '\0';
	return (ptr);
}
