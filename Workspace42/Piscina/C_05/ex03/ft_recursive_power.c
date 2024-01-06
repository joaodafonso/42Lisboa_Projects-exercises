/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:41:57 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/20 18:35:57 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = ft_recursive_power(nb, power - 1);
	return (nb * res);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(-6, 5));
}
*/
