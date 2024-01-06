/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:34:09 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/28 18:49:59 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_exclusive(long nbr, int base, char *base_chars)
{
	long	x;

	if (nbr != 0)
	{
		ft_exclusive(nbr / base, base, base_chars);
		x = nbr % base;
		write(1, &base_chars[x], 1);
	}
}

int	base_is_valid(char *base)
{
	long	base_nbr;
	long	i;
	long	f;

	base_nbr = 0;
	while (base[base_nbr] != '\0')
		base_nbr++;
	if (base_nbr == 1 || base_nbr == 0)
		return (0);
	i = 0;
	while (i < base_nbr)
	{
		f = i + 1;
		while (f < base_nbr)
		{
			if ((base[i] == base[f]) || base[i] == '+' || base[i] == '-')
				return (0);
			f++;
		}
		i++;
	}
	return (base_nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	char	c;
	long	num;

	num = nbr;
	c = '-';
	if (base_is_valid(base) == 0)
		return ;
	if (num == 0)
		write(1, &base[0], 1);
	else if (num < 0)
	{
		write(1, &c, 1);
		num = num * -1;
	}
	base_nbr = base_is_valid(base);
	ft_exclusive(num, base_nbr, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-78387280, "0123456789abcdef");
}
*/
