/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:41:07 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/18 10:47:09 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;

	if (n == 0)
		return (0);
		while (*ptr == *ptr2 && --n > 0)
		{
			ptr++;
			ptr2++;
		}
	return ((int)(*ptr - *ptr2));
}
/*
int main()
{
	char *src = "Hello";
	char *src2 = "Hxllo";
	size_t n = 10;

	printf("%d\n", memcmp(src, src2, n));
	printf("%d\n", ft_memcmp(src, src2, n));

}
*/
