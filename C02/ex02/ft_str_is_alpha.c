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

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}	
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "rede";
// 	char	src2[] = "rede1";
// 	char	src3[] = "REDE";
// 	char	src4[] = "1234";
// 	char	src5[] = "1234Rede";	
// 	printf("%d\n", ft_str_is_alpha(src));
// 	printf("%d\n", ft_str_is_alpha(src2));
// 	printf("%d\n", ft_str_is_alpha(src3));
// 	printf("%d\n", ft_str_is_alpha(src4));
// 	printf("%d\n", ft_str_is_alpha(src5));
// }