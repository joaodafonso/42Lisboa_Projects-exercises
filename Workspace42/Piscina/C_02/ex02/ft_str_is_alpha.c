/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:41:59 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/15 15:55:15 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			if (!(str[i] >= 65 && str[i] <= 90))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	sss[] = "AAA[ggg";

	int		ret;

	ret = ft_str_is_alpha(sss);
	printf("%d", ret);
}
*/
