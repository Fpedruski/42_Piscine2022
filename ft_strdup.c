/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:45:18 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/20 22:38:07 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len = strlen(s1) + 1;
	char *ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	return (char *)ft_memcpy(ptr, s1, len);
}
