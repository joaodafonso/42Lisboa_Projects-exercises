/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:44:02 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/05 15:42:42 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	i = ft_strlen(dest);
	while (src[j] != '\0' && (i + j + 1 < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
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
