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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "RRRRRRAAAAA";
// 	char	src2[] = "rede1";
// 	char	src3[] = "\n";
// 	char	src4[] = "";
// 	char	src5[] = "1234Red";
// 	printf("%s\n", ft_strlowcase(src));
// 	printf("%s\n", ft_strlowcase(src2));
// 	printf("%s\n", ft_strlowcase(src3));
// 	printf("%s\n", ft_strlowcase(src4));
// 	printf("%s\n", ft_strlowcase(src5));
// }