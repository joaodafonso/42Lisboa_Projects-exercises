/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:47:19 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/12 17:34:03 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabetrev;

	alphabetrev = 'z';
	while (alphabetrev >= 'a')
	{
		write(1, &alphabetrev, 1);
		alphabetrev--;
	}
}
