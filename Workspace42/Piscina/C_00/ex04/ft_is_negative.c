/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:32:20 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/12 18:43:58 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	num;

	num = 'P';
	if (n >= 0)
	{
		write(1, &num, 1);
	}
	else if (n < 0)
	{
		num = 'N';
		write(1, &num, 1);
	}
}
