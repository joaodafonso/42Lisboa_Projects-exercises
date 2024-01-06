/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:37:42 by galpers           #+#    #+#             */
/*   Updated: 2021/09/20 14:48:27 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_power(int nb, int power);

int	main(void)
{
	int	a;
	int	b;
	a = 2;
	b = 9;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
	a = 0;
	b = 0;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
	a = 3585;
	b = -123334;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
	a = -1234;
	b = 0;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
	a = 0;
	b = -1234;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
	a = 2;
	b = 30;
	printf("%d**%d: <%d>\n", a, b, ft_recursive_power(a, b));
}
