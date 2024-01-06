/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:29:38 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/27 18:55:04 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matriz;
	int	i;
	int	l;

	l = max - min;
	matriz = malloc(sizeof(int) * (max - min));
	if (matriz == NULL)
		return (0);
	i = 0;
	if (min >= max)
		return (0);
	while (i != l)
	{
		matriz[i] = min;
		i++;
		min++;
	}
	return (matriz);
}
/*
int	main(void)
{
	int	i;
	int	*ptr = ft_range(5, 10);

	i = 0;
	while (i < 5)
	{
		printf("%d", ptr[i]);
		i++;
	}
}
*/
