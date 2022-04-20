/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:42:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/20 23:40:33 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (dest[i] != '\0')
	{
		nb++;
		i++;
	}
	y = 0;
	while ((src[y] != '\0') && (i < nb))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (0);
}
