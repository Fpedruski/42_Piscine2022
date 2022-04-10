/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:00:15 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 19:40:44 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	module;

	mod = &module;
	module = a % b;
	*div = a / b;
}

/*
int main(void)
{
	int a = 154;
	int b = 56;
	
	int *mod;
	int *div;
	int result;
	int module;

	result = 0;
	module = 0;

	div = &result;
	mod = &module;

	ft_div_mod( a, b, div, mod);
}
*/
