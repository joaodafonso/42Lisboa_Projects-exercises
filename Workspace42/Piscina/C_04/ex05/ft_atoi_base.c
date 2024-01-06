/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:05 by jdias-af          #+#    #+#             */
/*   Updated: 2021/09/28 18:49:13 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	transf;

	i = 0;
	count = 1;
	transf = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		transf = (str[i] - '0') + transf * 10;
	}
	return (transf * count);
}

int	base_is_valid(char *base)
{
	int	base_nbr;
	int	i;
	int	f;

	base_nbr = 0;
	while (base[base_nbr] != '\0')
		base_nbr++;
	if (base_nbr == 1 || base_nbr == 0)
		return (0);
	i = 0;
	while (i < base_nbr)
	{
		f = i + 1;
		while (f < base_nbr)
		{
			if (base[i] == base[f])
				return (0);
			f++;
		}
		i++;
	}
	return (base_nbr);
}

void	ft_exclusive(long nbr, int base, char *base_chars)
{
	long	x;

	if (nbr != 0)
	{
		ft_exclusive(nbr / base, base, base_chars);
		x = nbr % base;
		write(1, &base_chars[x], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	char	c;
	long	num;

	num = nbr;
	c = '-';
	if (base_is_valid(base) == 0)
		return ;
	if (num == 0)
		write(1, &base[0], 1);
	else if (num < 0)
	{
		write(1, &c, 1);
		num = num * -1;
	}
	base_nbr = base_is_valid(base);
	ft_exclusive(num, base_nbr, base);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;

	if (base_is_valid(base) == 0)
		return (0);
	nb = ft_atoi(str);
	while ()
	{
		n = n * (baselenght) + str[i];
	}
}
