/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:54:52 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/14 12:34:52 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] <= 99)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			ft_putchar('0' + num[0] / 10);
			ft_putchar('0' + num[0] % 10);
			write(1, " ", 1);
			ft_putchar('0' + num[1] / 10);
			ft_putchar('0' + num[1] % 10);
			if (num[0] == 98 && num[1] == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			num[1]++;
		}
		num[0]++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
