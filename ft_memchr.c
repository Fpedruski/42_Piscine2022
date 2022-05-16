/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:14:45 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/16 22:57:02 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *src, int ch, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char*)src;
	while(n >= (i++ + 1))
		if (*(ptr++) == (unsigned char)ch)
			return ((void*)ptr-- -1);
	return (0);
}
int main()
{
	printf("%s", ft_memchr("ABCDEFG",'D',7));
}
