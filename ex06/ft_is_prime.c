/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:29:02 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/26 14:21:36 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <limits.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_is_prime(-1) == 0 ? "OK" : "Fail",
		ft_is_prime(-3) == 0 ? "OK" : "Fail",
		ft_is_prime(0) == 0 ? "OK" : "Fail",
		ft_is_prime(1) == 0 ? "OK" : "Fail",
		ft_is_prime(2) == 1 ? "OK" : "Fail",
		ft_is_prime(3) == 1 ? "OK" : "Fail",
		ft_is_prime(4) == 0 ? "OK" : "Fail",
		ft_is_prime(5) == 1 ? "OK" : "Fail",
		ft_is_prime(6) == 0 ? "OK" : "Fail",
		ft_is_prime(8) == 0 ? "OK" : "Fail",
		ft_is_prime(10) == 0 ? "OK" : "Fail",
		ft_is_prime(12) == 0 ? "OK" : "Fail",
		ft_is_prime(3457) == 1 ? "OK" : "Fail",
		ft_is_prime(7322) == 0 ? "OK" : "Fail",
		ft_is_prime(2147483647) == 1 ? "OK" : "Fail"
		  );
}*/
