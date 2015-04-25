/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <pdelobbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/25 02:14:55 by pdelobbe          #+#    #+#             */
/*   Updated: 2015/04/25 04:28:51 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bruteforce.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n *= 10;
		n += str[i] - 48;
		++i;
	}
	return (n);
}
