/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:13:20 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/15 23:32:24 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2 || (*s1 > n) && (*s2 > n))
	{
		printf("Bigger");
		return 1;
	}
	if (*s1 < *s2 )
	{	
		printf("Smaller");
			return -1;
	}
	return 0;
} 

int main()
{
	unsigned int n = 5;
	
	char *s1 = "Hello";
	char *s2 = "Hell";


	ft_strncmp(s1, s2, n);
}
