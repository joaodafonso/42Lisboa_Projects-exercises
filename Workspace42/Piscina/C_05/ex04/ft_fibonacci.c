/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:54:03 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/20 18:51:34 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	while ((index - 1) > 0)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (-1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(6));
}
*/
