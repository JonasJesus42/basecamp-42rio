/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:49:45 by jjesus            #+#    #+#             */
/*   Updated: 2022/03/27 17:35:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putstr(char *str)
{
	char	a;

	while (*str != '\0')
	{
		a = *str;
		write(1, &a, 1);
		str++;
	}
}

// int main()
// {
// 	char *a;
// 	a = "12345";

// 	ft_putstr(a);
// 	return (0);
// } 