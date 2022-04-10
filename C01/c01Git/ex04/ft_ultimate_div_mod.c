/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:40:22 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 19:42:12 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;	
	int	result;
	int	module;

	result = *a;
	module = *b;
	div = result / module;
	mod = result % module;
	*a = div;
	*b = mod;
}

/*
int main()
{
	int	*a;
	int	*b;
	int result;
	int module;

	a = &result;
	b = &module;

	*a = 8;
	*b = 5;

	ft_ultimate_div_mod(a, b);
}

*/
