/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:41:26 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/19 11:46:11 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	wrd1[] = "LegoThisIsEasyhisgfhjiauhiadhbaijsadnjnsa";
	char	wrd2[] = "DoIt";
	ft_strncpy(wrd1, wrd2, 41);
	//strncpy(wrd1, wrd2, 30);
	printf("%s", wrd1);
}
*/
