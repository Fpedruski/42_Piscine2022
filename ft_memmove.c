/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:06:35 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/17 20:51:02 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void 	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (ptr == NULL && ptr2 == NULL)
			return (dest);
	if (ptr < ptr2)
	{
		while (++i <= len)
			*(ptr++) = *(ptr2++);
	}
	else
		{
			while (len-- > 0)
				*(ptr + len) = *(ptr2 + len);
		}
	return (dest);
}

/*
int main(int argc, char* argv[])
{
  char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  printf("After memmove()\n");
  printf("%s", ft_memmove((void *)&c_array[5], (void *)&c_array[3], 5));
}
*/
