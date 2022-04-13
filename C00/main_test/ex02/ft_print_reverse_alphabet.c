/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:45:32 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/11 15:54:56 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c --;
    }
}
