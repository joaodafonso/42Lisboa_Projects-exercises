/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:56:25 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/14 16:18:02 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*#include<stdlib.h>
#include<string.h>
#include<stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 32 && str[i] <= 126) || str[i] == '\0')
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	b[] = ":#";
	int	ret;
	char *a;

	a = malloc(sizeof(char)*14);
	strcpy(a, b);
	ret = ft_str_is_printable(a);
	printf("%d\n", ret);
}
*/
