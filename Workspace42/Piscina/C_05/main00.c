/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:36:19 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 17:54:09 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 10;
	printf("%d \n", ft_iterative_factorial(nb));
	nb = 0;
	printf("%d \n", ft_iterative_factorial(nb));
	
	return (0);
}
