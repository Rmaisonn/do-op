/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:01:50 by rmaisonn          #+#    #+#             */
/*   Updated: 2017/07/24 14:14:21 by rmaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		ft_tableope(int a, char b, int c)
{
	t_operateur	table[5];
	char		*str;
	int			x;

	x = 0;
	str = malloc(sizeof(char) * 5);
	table[0].tab = &add;
	table[1].tab = &sub;
	table[2].tab = &mult;
	table[3].tab = &divi;
	table[4].tab = &mod;
	str[0] = '+';
	str[1] = '-';
	str[2] = '*';
	str[3] = '/';
	str[4] = '%';
	while (str[x])
	{
		if (b == str[x])
			return (table[x].tab(a, c));
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	char	b;
	int		c;

	if (argc != 4)
		return (-1);
	if (argv[2][1] != '\0')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (-1);
	}
	a = ft_atoi(argv[1]);
	b = argv[2][0];
	c = ft_atoi(argv[3]);
	if (ft_divmodstop(b, c) == -1)
		return (-1);
	else
	{
		ft_putnbr(ft_tableope(a, b, c));
		ft_putchar('\n');
		return (0);
	}
}
