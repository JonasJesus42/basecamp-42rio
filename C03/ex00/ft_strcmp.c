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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}

// #include <stdio.h>
// int ft_strcmp(char *s1, char *s2);
// int	main(void)
// {
// 	char *s1;
// 	char *s2;	
// 	s1 = "ad";
// 	s2 = "a";
// 	printf("s1: %s, s2: %s\n", s1, s2);
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return(0);
// }