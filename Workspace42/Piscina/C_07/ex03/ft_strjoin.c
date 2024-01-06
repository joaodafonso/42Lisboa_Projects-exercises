/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:16:36 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/28 15:23:03 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

int	calc_len(int size, char **strs, char *sep)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (index < size)
		count += (ft_strlen(strs[index++]));
	count += (ft_strlen(sep) * (index));
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && nb > 0)
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
		nb--;
	}
	*dst = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ranstr;
	char	*temph;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	ranstr = (char *)malloc(sizeof(char) * calc_len(size, strs, sep));
	if (ranstr == NULL)
		return (0);
	i = 0;
	temph = ranstr;
	while (i < size)
	{
		temph += ft_strlen(ft_strcpy(temph, strs[i]));
		if (i < size - 1)
			temph += ft_strlen(ft_strcpy(temph, sep));
		i++;
	}
	*temph = '\0';
	return (ranstr);
}
/*
int	main(void)
{
	char	*str[3];
	char	*res;
	str[0] = "Primeira";
	str[1] = "Segunda";
	str[2] = "Terceira";
	res = ft_strjoin(3, str, "#####");
	while (*res)
	{
		write(1, res++, 1);
	}
}
*/
