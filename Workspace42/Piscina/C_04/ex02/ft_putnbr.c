/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:11:09 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/20 16:37:24 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr((-nb));
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		num = '0' + nb % 10;
		write(1, &num, 1);
	}
	else
	{
		num = '0' + nb;
		write(1, &num, 1);
	}
}
