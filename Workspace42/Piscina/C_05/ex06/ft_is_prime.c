/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:03:29 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/23 15:30:40 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	a;
	int	d;

	a = 7;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (a < nb)
	{
		d = a - 2;
		if (nb % a == 0 || nb % d == 0)
			return (0);
		a += 6;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(2147483647));
}
*/
