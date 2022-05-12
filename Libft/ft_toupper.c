/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:44:13 by Switcher          #+#    #+#             */
/*   Updated: 2022/05/12 14:43:28 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	ft_toupper(int ch)
{
	return(ch -= 32);
}

/*
{
	char	var1 = 'a';
	char	var2 = 'b';

	printf("%c: ", var1);
	printf("%c\n", ft_toupper(var1));
	printf("%c: ", var2);
	printf("%c\n", ft_toupper(var2));
}
*/
