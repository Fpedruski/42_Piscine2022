/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:38:22 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 19:38:30 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{	
	int	tmp;

	if (b != a)
	{
		tmp = *b;
		*b = *a;
		*a = tmp;
	}
}

/*
int main(void)
{
	int vara = 111;
	int varb = 222;
	int *a;
	int *b;
	
	a = &vara;
	b = &varb;

	ft_swap(a, b);
}
*/
