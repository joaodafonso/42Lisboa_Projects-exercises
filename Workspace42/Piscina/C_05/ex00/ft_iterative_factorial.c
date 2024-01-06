/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:09:58 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/26 20:10:20 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 1)
	{
		res = res * (i - 1);
		i--;
	}
	return (res);
}

#include<stdio.h>

int	main(void)
{
	int	i;

	i = ft_iterative_factorial(14);
	printf("%i", i);
}

