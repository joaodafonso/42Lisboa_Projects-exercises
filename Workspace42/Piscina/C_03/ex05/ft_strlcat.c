/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:44:02 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/22 15:24:01 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

unsigned int	ft_count(char *dest)
{
	unsigned int	count;

	count = 0;
	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (size <= ft_count(dest))
	{
		return (size + ft_count(src));
	}
	i = ft_count(dest);
	while (src[j] != '\0' && (i + j + 1 < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_count(src));
}
/*
int	main()
{
	char	dest[] = "ola mundo";
	char	src[] = "hello world";
	unsigned int	b;

	b = ft_strlcat(dest, src, 11);
	printf("%d\n", b);
	//printf("%d", ft_strlcat(dest, src, 1));
}
*/
/* return's possiveis 
 * size < dest = size + src
 * size > dest = dest + src
 *
 * concatunar as strings anyway.
 * */
