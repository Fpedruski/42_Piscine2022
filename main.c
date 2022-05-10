/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:42:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/10 16:43:51 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	main()
{
	int var1 = '1';
	int var2 = 'A';
	int var3 = 'a';
	int var4 = '2';

	printf("%c return %d |", var1, ft_isalpha(var1));
	printf("%c return %d |", var2, ft_isalpha(var2));
	printf("%c return %d |", var3, ft_isalpha(var3));
	printf("%c return %d \n", var4, ft_isalpha(var4));
	return (0);
}
