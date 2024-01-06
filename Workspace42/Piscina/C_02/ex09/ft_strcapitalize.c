/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:36:56 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/19 16:08:25 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_inicio(char *c)
{
	if (*c > 'a' && *c < 'z')
	{
		*c = *c - 32;
	}
}

int	ft_alga(char *n)
{
	if (*n >= 48 && *n <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int	ft_alpha(char *a)
{
	if ((*a >= 'A' && *a <= 'Z') || (*a >= 'a' && *a <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_inicio(&str[i]);
	while (str[i] != '\0')
	{
		if ((ft_alga(&str[i]) == 0 && ft_alpha(&str[i]) == 0))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			{
				str[i + 1] = str[i + 1] + 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "44Oi, tuDo bEm? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(string);
	printf("%s", string);
}
*/
