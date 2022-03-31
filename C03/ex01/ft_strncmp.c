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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;
	unsigned char	d;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i];
			b = s2[i];
			return (a - b);
		}
		i++;
	}
	if (i < n && ((s2[i] != '\0' && s1[i] == '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
	{
		c = s1[i];
		d = s2[i];
		return (c - d);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = "acaa";
// 	char	*s2 = "aaa";

// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// }