/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuzaro- <mariomenezes.mail@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by mfuzaro-'s        #+#    #+#             */
/*   Updated: 2021/12/05 21:53:50 by mfuzaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	col_calculation(int row, int col, int y, int x)
{
	if (y == 1 && col == 1)
	{
		ft_putchar('/');
	}
	else if ((row == y && x == 1) || (y == 1 && col == x))
	{
		ft_putchar('\\');
	}
	else if ((row == 1 && col == 1) || (row == y && col == x))
	{
		ft_putchar('/');
	}
	else if ((row > 1 && row < y) && (col > 1 && col < x))
	{
		ft_putchar(' ');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
	col++;
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			col_calculation(row, col, y, x);
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
