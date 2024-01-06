/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:39:00 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 15:00:15 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = -1;
	while (nb++ != 20)
		printf("Result of %d! is: %d\n", nb, ft_is_prime(nb));
	printf("%s", "Is 2147483647 a prime number: ");
	printf("%d", ft_is_prime(2147483647));
}
