/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:44:23 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/02 20:30:21 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_put_liner(start, mid, end, loop){
	int a;
	
	a = 0;

while (a < loop)
	{
	if(a == 0)
		{
		ft_put_liner(start);
		}	else if(a == -1 )
		{ 
		ft_put_liner(end);
		}else if(a < loop)
		{
		ft_put_liner(mid);
		} 
	}
a++;			
}


void rush(int x){

int	count;
count = 0;

while (count < x)
	{	
	if(count == 0)
		{
		ft_put_liner('/','*','\\',x);
		}
	else if(count == -1 )
	{
ft_put_liner('\\','*','/',x );
	} else if(count < x )
	{ 
	ft_put_liner('*',' ','*',x );
	}
}
}