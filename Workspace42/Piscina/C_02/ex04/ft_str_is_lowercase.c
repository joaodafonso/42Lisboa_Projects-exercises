/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:13:05 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/15 16:15:10 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	b[] = "dssadadsada";
	int	ret;
	char *a;

	a = malloc(sizeof(char)*14);
	strcpy(a, b);	
	ret = ft_str_is_lowercase(a);
	printf("%d\n", ret);
}
*/
