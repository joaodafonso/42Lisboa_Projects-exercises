/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:35:04 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/23 21:19:45 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	countsrcwords;

	i = 0;
	countsrcwords = 0;
	while (src[countsrcwords] != '\0')
	{
		countsrcwords++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (countsrcwords);
}

int	main(void)
{
	char			wrd1[] = "Hello there, Venus";
	char			wrd2[] = "aASDADAaa";
	unsigned int	rs;
	//int				r;
	rs = ft_strlcpy(wrd1, wrd2, 14);
	//r = strlcpy(wrd2, wrd1, 0);
	printf("%s", wrd2);
}

