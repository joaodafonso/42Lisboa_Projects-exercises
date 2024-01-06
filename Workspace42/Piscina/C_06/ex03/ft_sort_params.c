/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:38:23 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/23 20:01:21 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_params(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		c1;

	c1 = 0;
	i = 1;
	while (i < argc - 1)
	{
		c1 = i + 1;
		while (c1 < argc)
		{
			if (ft_strcmp(argv[i], argv[c1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[c1];
				argv[c1] = temp;
			}
			c1++;
		}
		i++;
	}
	i = 0;
	while (i++ < argc - 1)
		ft_print_params(argv[i]);
}
