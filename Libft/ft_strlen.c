/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:53:53 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/12 14:54:31 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_strlen(char	*ch)
{
	int	i;
	i = 0;

	while(ch[i] != '\0')
	{
		if(ch[i])
		{
			i++;
		}
	}	
	printf("%d Lenght \n", i);
	return(i);	
}