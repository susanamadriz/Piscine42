/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juangon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:13:32 by juangon2          #+#    #+#             */
/*   Updated: 2023/07/09 16:42:49 by juangon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	imprimir(int h, int v, int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 1;
	v = 1;
	while ((v <= y) && (x > 0))
	{
		while (h <= x)
		{
			imprimir(h, v, x, y);
			h++;
		}
		ft_putchar('\n');
		v++;
		h = 1;
	}
}

void	imprimir(int h, int v, int x, int y)
{
	if ((h == 1 && v == 1) || (h == x && v == y))
	{
		ft_putchar('o');
	}
	else if ((v == y && h == 1) || (h == x && v == 1))
	{
		ft_putchar('o');
	}
	else if ((v == 1) || (v == y))
	{
		ft_putchar('-');
	}
	else if ((h == 1) || (h == x))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
