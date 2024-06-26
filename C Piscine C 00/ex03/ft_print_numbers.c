/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:54:29 by sjuan-ma          #+#    #+#             */
/*   Updated: 2023/07/10 13:35:04 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int x)
{
	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}
/*
int	main(void)
{
	ft_print_numbers('x');
	return (0);
}
*/
