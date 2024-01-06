/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:22:47 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/27 18:54:54 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

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

char	*ft_strdup(char *src)
{
	char	*memforcpy;
	int		srclen;
	int		i;

	i = 0;
	srclen = ft_strlen(src);
	memforcpy = malloc(sizeof(char) * srclen);
	if (memforcpy == NULL)
		return (0);
	ft_strcpy(memforcpy, src);
	return (memforcpy);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Copia esta";
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target1 = strdup(source);
	char* target2 = ft_strdup(source);
    printf("%s\n", target1);
	printf("%s\n", target2);
    return (0);
}
*/
