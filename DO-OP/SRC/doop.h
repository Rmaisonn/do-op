/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:28:29 by rmaisonn          #+#    #+#             */
/*   Updated: 2017/07/23 14:41:53 by rmaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				add(int a, int b);
int				sub(int a, int b);
int				mult(int a, int b);
int				divi(int a, int b);
int				mod(int a, int b);
int				ft_divmodstop(char b, int c);
int				ft_tableope(int a, char b, int c);

typedef struct	s_operateur
{
	int			(*tab)(int, int);
}				t_operateur;

#endif
