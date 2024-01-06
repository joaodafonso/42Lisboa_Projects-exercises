/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:31:55 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/15 16:21:10 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*
int	main(void)
{
	char	wrd1[] = "LeGosdbhjHGDUBSD002367";
	char	*st;
	st = ft_strlowcase(wrd1);
	write(1, st, 20);
}
*/
