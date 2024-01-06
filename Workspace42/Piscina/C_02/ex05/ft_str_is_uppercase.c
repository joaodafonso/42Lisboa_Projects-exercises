/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:47:18 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/14 15:55:42 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	b[] = "AAAAAA";
	int	ret;
	char *a;

	a = malloc(sizeof(char)*14);
	strcpy(a, b);
	ret = ft_str_is_uppercase(a);
	printf("%d\n", ret);
}
*/
