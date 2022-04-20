/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:43:17 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/20 23:33:27 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (to_find[i] != str[i])
		{
			i++;
			if (str[i] == '\0' && to_find[i] == '\0')
				return (0);
		}
		i = 0;
		if (to_find[i] == '\0')
			return (str);
		if (str[i] == to_find[i] && str[i] != '\0')
			return (&str[i]);
		i++;
		str++;
	}
	return (0);
}
