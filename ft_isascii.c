/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:13:49 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/10 16:32:25 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isascii(char c)
{
	return (c >= 0 && c <= 127);
}

int main()
{
	char var1, var2, var3;
	var1 = 'a';
	var2 = 'B';
	var3 = 0x80;

	printf("Char %c is %s an ASCII\n", ft_isascii(var1) ,(ft_isascii(var1) ? "" : "not ") );
	printf("Char %c is %s an ASCII\n", ft_isascii(var2) ,(ft_isascii(var2) ? "" : "not ") );
	printf("Char %c is %s an ASCII\n", ft_isascii(var3) ,(ft_isascii(var3) ? "" : "not ") );
}
