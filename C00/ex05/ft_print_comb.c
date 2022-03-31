/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesus - <jonasdasilvajesus2@outlook.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by jjesus            #+#    #+#             */
/*   Updated: 2021/12/05 21:53:50 by jjesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nunber(char hundred, char ten, char unit)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unit, 1);
	if (!(hundred == '7' && ten == '8' && unit == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0' -1;
	while (++hundred <= '7')
	{
		ten = hundred;
		while (++ten <= '8')
		{
			unit = ten +1;
			while (unit <= '9')
			{
				ft_print_nunber(hundred, ten, unit);
				unit++;
			}
		}
	}
}

//int main(void)
//{
//	ft_print_comb();
//	return (0);
//}
