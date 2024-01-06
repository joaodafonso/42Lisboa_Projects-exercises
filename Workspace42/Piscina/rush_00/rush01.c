/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:21:34 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/11 17:02:26 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush01(int x, int y)
{
	int a;
	int l;

	l = 1;
	while (l <= y && x > 0)
	{
		a=1;
		while (a <= x)
		{
			if ((a == 1 && l == 1) || ((a == y && l== x) && (l != 1 && a != 1)))
			{
				ft_putchar('/');
			}
			else if ((a == x && l == 1) || (a == 1 && l == y))
			{
				ft_putchar('\\');
			}
			else if ((a == 1) || (a == x) || (l == 1) || (l == y))
			{
				ft_putchar('*');
			}
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		l++;
	}
}

int	main()
{
	rush01(5, 5);
	return(0);
}
