/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuzaro- <mariomenezes.mail@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by mfuzaro-'s        #+#    #+#             */
/*   Updated: 2021/12/05 23:09:24 by mfuzaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	col_calculation(int row, int col, int y, int x)
{
	while (col <= x)
	{
		if ((row == 1 && col == 1) || (row == y && col == 1))
		{
			ft_putchar('o');
		}
		else if ((row > 1 && row < y) && (col > 1 && col < x))
		{
			ft_putchar(' ');
		}
		else if ((row == 1 && col == x) || (row == y && col == x))
		{
			ft_putchar('o');
		}
		else if (row == 1 || row == y)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('|');
		}
		col++;
	}
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
		col_calculation(row, col, y, x);
		row++;
		ft_putchar('\n');
	}
}
