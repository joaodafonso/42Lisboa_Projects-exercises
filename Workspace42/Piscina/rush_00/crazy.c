/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crazy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:26:29 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/11 18:26:17 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int a;
	int l;

	l = 1;
	a = 1;
	while (a <= y)
	{
		if (a == 1 || a == y)
		{
			l=1;
			while (l <= x)
			{
				if (l == 1)
				{
					ft_putchar('/');
				}
				else if (l > 1 && l < x)
				{
					ft_putchar('*');
				}
				else if (l == x) 
				{
					ft_putchar('\\');
				}
				l++;
			}
		}
		else
		{
			l=1;
			while (l <= x)
				{
					if (l > 1 && l < x)
					{
						ft_putchar(' ');
					}
					else
					{
						ft_putchar('*');
					}
					l++;
				}
		}
		a++;
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	rush01(5, 4);
	return(0);
}
