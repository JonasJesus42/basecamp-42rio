/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by mfuzaro-'s group  #+#    #+#             */
/*   Updated: 2021/12/04 16:49:46 by mfuzaro-'s group ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	col_calculation(int row, int col, int y, int x)
{
	while (col <= x)
	{
		if ((row == 1 && col == 1) || (row == y && col == 1))
		{
			ft_putchar('A');
		}
		else if ((row > 1 && row < y) && (col > 1 && col < x))
		{
			ft_putchar(' ');
		}
		else if ((row == 1 && col == x) || (row == y && col == x))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
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
