/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:16:04 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/19 11:48:16 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = str[i];
		if ((str[i] < 32) || (str[i] > 126))
		{
			if (str[i] < 0)
			{
				str[i] = str[i] + 256;
			}
			write(1, "\\", 1);
			ft_putchar("0123456789abcdef"[t / 16]);
			ft_putchar("0123456789abcdef"[t % 16]);
		}
		else
		{
			ft_putchar(t);
		}
		i++;
	}
}
/*
int	main()
{
char	c[25] = "Oi\nvoce esta bem?";

ft_putstr_non_printable(c);
} 
*/
