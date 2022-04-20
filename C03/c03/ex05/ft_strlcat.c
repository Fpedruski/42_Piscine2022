/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:13:07 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/21 00:06:18 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	if (size <= 0)
	{
		return (*src);
	}
	if (dest[0] == '\0' )
	{
		return (*src);
	}
	while (dest[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
