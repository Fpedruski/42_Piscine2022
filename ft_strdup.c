/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:45:18 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/02 16:31:08 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = strlen(s1) + 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	return ((char *)ft_memcpy(ptr, s1, len));
}
