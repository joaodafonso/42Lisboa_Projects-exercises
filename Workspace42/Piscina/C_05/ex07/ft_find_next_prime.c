/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:40:46 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/23 15:30:53 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i < 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	sqrt;
	int	is_prime;

	sqrt = ft_sqrt(nb);
	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
	{
		return (nb);
	}
	else if (nb < 2)
	{
		return (2);
	}
	else
	{
		while (nb < 2147483647)
		{
			if (ft_is_prime(nb) == 1)
				return (nb);
			nb++;
		}
	}
	return (nb);
}
/*
#include<stdio.h>

int	main()
{
	int	a;

	a = 0;
	a = ft_find_next_prime(2147483636);
	printf("%d", a);
}
*/
