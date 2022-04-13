/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:32:18 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/11 16:26:59 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int int_len(int nb) {
    int len = 1;
    while (nb > 0){
        len++;
        nb /= 10;
    }
    return len - 1;
}

void ft_combi(int n)
{	// lets start with 2
    int combi = 1; // number to 1 starting
    for (int i = 0; i < n; i++) // if i < 2
        combi *= 10; // 10
    for (int i = 0; i < combi; i++) { // if i[1] < 10 bucle
        for (int j = 0; j > int_len(i) - n; j--) // 
            printf("0");
        if (i == 0)
            printf("\n");
        else
            printf("%d\n", i);
    }
}

int main()
{
    ft_combi(3);
}
