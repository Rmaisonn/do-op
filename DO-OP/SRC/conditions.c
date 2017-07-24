/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:51:10 by rmaisonn          #+#    #+#             */
/*   Updated: 2017/07/24 15:45:56 by rmaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		ft_divmodstop(char b, int c)
{
	if (b == '/' && c == 0)
	{
		write(1, "Stop : divison by zero\n", 23);
		return (-1);
	}
	if (b == '%' && c == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	else
		return (0);
}
