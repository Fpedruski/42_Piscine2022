/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:32:53 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/15 20:26:26 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t i)
{
	unsigned char	*str;

	str = (unsigned char *)dest;
	while (i-- > 0)
	{
		*(str++) = (unsigned char)ch;
	}
	return (dest);
}
