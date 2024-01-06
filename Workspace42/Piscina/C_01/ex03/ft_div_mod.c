/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:33:44 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/13 13:56:09 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int lol;
	int pop;
	int	div;
	int	mod;

	lol = 3348;
	pop = 60;
	ft_div_mod(lol, pop, &div, &mod);
	write(1, &div, 1);
	write(1, &mod, 1);
}
*/
