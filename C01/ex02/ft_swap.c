/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by jjesus            #+#    #+#             */
/*   Updated: 2022/03/27 17:27:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	fist;
	int	second;

	fist = *a;
	second = *b;
	*a = second;
	*b = fist;
}

// #include <stdio.h>
// void main()
// {	
// 	int	a;
// 	int	b;
// 	a = 3;
// 	b = 5;
// 	ft_swap(&a, &b);
// 	printf("a: %d\n", a);
// 	printf("b: %d\n", b);
// }
