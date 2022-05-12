/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:35:26 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/12 19:43:48 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"


int	ft_isalnum(int ch)
{
	return(ft_isalpha(ch) || ft_isdigit(ch));
}
/*
int main()
{
	int x = 'A';
	int z = '2';

	printf("%d", ft_isalnum(x));
	printf("%d", ft_isalnum(z));
}
*/
