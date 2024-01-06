/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:36:36 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 12:36:55 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 10;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
	nb = 0;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
	nb = 112;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
	nb = 10;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
	nb = -97;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
	nb = 1;
	printf("Result of %d! is: %d\n", nb, ft_recursive_factorial(nb));
}
