/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:36:13 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/05 17:39:11 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	transf;

	i = 0;
	count = 1;
	transf = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		transf = (str[i] - '0') + transf * 10;
		i++;
	}
	return (transf * count);
}

#include<stdio.h>

int	main(void)
{
	int	a;
	char	str[] = "	   ----++-+156  		 8";

	a = ft_atoi(str);
	printf("%d", a);
}
