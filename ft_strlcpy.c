/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:38:16 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/19 17:08:55 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while(src[count] != '\0' && count < (dstsize - 1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}
/*
int test(int size)
{
    char string[] = "Hello there, Venus";
    int len;
	int i = 0;
	char *buffer;
	char *leakis;

	leakis =  (char *) malloc ( size * sizeof(char));
	buffer = (char*) malloc( size * sizeof(char));

    len = ft_strlcpy(buffer,string,size);
	leakis[0] = 'a';
	leakis[1] = 'p';
	printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            len
          );
	//free(buffer); 
	printf("%d\n", getpid());
	while (i < 10000000)
	usleep(100000);
	return (0);
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}*/
