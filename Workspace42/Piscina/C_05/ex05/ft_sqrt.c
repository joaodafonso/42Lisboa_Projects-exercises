/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:55:11 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/26 16:11:45 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res <= nb && res <= nb)
	{
		if ((res * res) == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(9));
}
*/
