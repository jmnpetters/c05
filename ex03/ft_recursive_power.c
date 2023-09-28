/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:42:02 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/24 12:43:49 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	half;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power % 2 == 0)
	{
		half = ft_recursive_power(nb, power / 2);
		return (half * half);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("216:%d\n", ft_recursive_power(6, 3));
}*/
