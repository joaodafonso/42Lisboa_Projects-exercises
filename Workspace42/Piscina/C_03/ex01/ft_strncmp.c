/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:35:22 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/26 20:04:42 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (i >= n)
		{
			return (0);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}
/*
#include <stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[] = "0";
	char	s2[] = "0";
	int		i;
	int		j;

	i = 0;
	j = strncmp(s1, s2, 1);
	i = ft_strncmp(s1, s2, 1);
	printf("%d\n", i);
	printf("%d", j);
}
*/
