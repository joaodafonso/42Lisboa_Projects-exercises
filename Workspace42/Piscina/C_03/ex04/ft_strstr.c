/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:21:00 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/22 21:22:03 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_checkallwrd(char *dest, char *tofind)
{
	int	i;

	i = 0;
	while (*dest && *tofind)
	{
		if (*dest != *tofind)
		{
			return (0);
		}
		dest++;
		tofind++;
	}
	return (*tofind == '\0');
}

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (tofind[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (ft_checkallwrd(str, tofind) && str[i] == tofind[0])
			{
				return (str);
			}
			str++;
		}
		return (0);
	}
	else
		return (str);
}
/*
int	main()
{
	char	WRDfind[30] = "naosaoiguais";
	char	WRDori[50] = "isto e muito estranho";

	printf("%s", ft_strstr(WRDori, WRDfind));
}
*/
