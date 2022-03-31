/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesus - <jonasdasilvajesus2@outlook.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by jjesus            #+#    #+#             */
/*   Updated: 2021/12/05 21:53:50 by jjesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	cont;

	write(1, "00 01", 5);
	n1 = 0;
	n2 = 2;
	while (n1 < 100 && n2 < 100)
	{
		write(1, ", ", 2);
		cont = n1 / 10 + '0';
		ft_putchar(cont);
		cont = n1 % 10 + '0';
		ft_putchar(cont);
		ft_putchar(' ');
		cont = n2 / 10 + '0';
		ft_putchar(cont);
		cont = n2 % 10 + '0';
		ft_putchar(cont);
		n2++;
		if (n2 == 100)
		{
			n2 = ++n1 + 1;
		}
	}
}

//int main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
