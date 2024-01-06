/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:38:31 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 14:02:07 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Result of %d! is: %d\n", nb, ft_sqrt(nb));
	nb = -1;
	printf("Result of %d! is: %d\n", nb, ft_sqrt(nb));
	nb = 2147483647;
	printf("Result of %d! is: %d\n", nb, ft_sqrt(nb));
	nb = 64;
	printf("Result of %d! is: %d\n", nb, ft_sqrt(nb));
}
