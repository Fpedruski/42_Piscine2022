/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:29:42 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/20 20:07:31 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*ptr;

	i = 0;

	ptr = (char *)haystack;
	n_len = ft_strlen(needle);

	if (n_len == 0 || haystack == needle)
		return (ptr);
	while(ptr[i] != '\0' && i < len)
	{
		j = 0;
		// check the ptr until the + counter needle
		// check the needtle until the end
		// assures that the ptr char size + j is the same char in j
		while(ptr[i + j] != '\0' && needle[j] != '\0' 
				&& ptr[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		//return the answer if the counter needle is the same size of needle
	if (j == n_len)
		return (ptr + i);
	i++;
	}
	return (0);
}

int main()
{
	printf("%s\n", ft_strnstr("Use your brain or your hearth", "brain", 15));
	printf("%s\n", strnstr("Use your brain or your hearth", "brain", 20));
}
