/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:59:36 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/30 17:13:18 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_sep(char *charset, char str)
{
	while (*charset)
	{
		if (charset[i] == str)
			return (1);
		charset++;
	}
	return (0);
}



char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**arr;
	int		word;

	i = 0;
	j = 0;
	word = 0;
	while (s[i] && j < wsize)
}
