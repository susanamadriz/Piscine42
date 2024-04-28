/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:54:29 by sjuan-ma          #+#    #+#             */
/*   Updated: 2023/07/10 11:24:13 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(char x)
{
	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet('x');
	return (0);
}
*/
