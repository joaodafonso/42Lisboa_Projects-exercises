/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:49:25 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/12 19:09:24 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, &a, 3);
				if (a[0] == '7' && a[1] == '8' && a[2] == '9')
				{
					break ;
				}
				write(1, ", ", 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
