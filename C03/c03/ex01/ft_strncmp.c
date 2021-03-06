/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:13:20 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/20 23:37:54 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2 || (*s1 > n) && (*s2 > n))
	{
		return (1);
	}
	if (*s1 < *s2)
	{
		return (-1);
	}
	return (0);
}
