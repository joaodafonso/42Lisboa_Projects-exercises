/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:31:17 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/17 12:11:59 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nr(int n, int nr[n])
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = '0' + nr[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	nr[9];
	int	i;

	nr[0] = 0;
	i = 0;
	while (i++ < n)
	{
		nr[i] = nr[i - 1] + 1;
	}
	while (nr[n - 1] - nr[0] != n - 1 || nr[n - 1] != 9)
	{
		ft_print_nr(n, nr);
		write(1, ", ", 2);
		i = n - 1;
		while (nr[i] == 10 - n + i)
		{
			i--;
		}
		nr[i]++;
		while (i++ < n)
		{
			nr[i] = nr[i - 1] + 1;
		}
	}
	ft_print_nr(n, nr);
}

int		main(void)
{
	ft_print_combn(5);
	return (0);
}

/*quando a diferenca entre o ultimo numero e o primeiro != n - 1 OU se o ult
 * imo nao for 9
 *vai fazendo loopings de tras para a frente e de frente para tras para
 ir preenchendo as procximas possibilidades/
 por ex. 12348 ==  12349. ou 1234589 == 1234689
 caso falhe simplesmente printa o ultimo e sai*/
