/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:39:49 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 12:50:20 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 2147483647;
	printf("Result of %d! is: %d\n", nb, ft_find_next_prime(nb));
	nb = 2147483645;
	printf("Result of %d! is: %d\n", nb, ft_find_next_prime(nb));
	nb = 279077;
	printf("Result of %d! is: %d\n", nb, ft_find_next_prime(nb));
	nb = 411724;
	printf("Result of %d! is: %d\n", nb, ft_find_next_prime(nb));
}
