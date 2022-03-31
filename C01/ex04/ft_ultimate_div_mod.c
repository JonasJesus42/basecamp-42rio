/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by jjesus            #+#    #+#             */
/*   Updated: 2022/03/27 17:27:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	va;
	int	vb;

	va = *a;
	vb = *b;
	*a = va / vb;
	*b = va % vb;
}

// #include <stdio.h>
// void main()
// {	
// 	int	a;
// 	int	b;

// 	a = 42;
// 	b = 10;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div %d\n", a);
// 	printf("mod %d\n", b); 
// }
