/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:00:21 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/26 14:26:21 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb == 1)
	{
		return (1);
	}
	if (nb == 2 || nb == 3)
	{
		return (0);
	}
	root = 2;
	while (root * root < nb && root < 46341)
	{
		root++;
	}
	if (root * root == nb)
	{
		return (root);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(INT_MAX));
	
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));	
}*/
