/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelobbe <pdelobbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/25 01:57:32 by pdelobbe          #+#    #+#             */
/*   Updated: 2015/04/25 04:41:40 by pdelobbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bruteforce.h"

static const char	ALPHABET[] =
	"abcdefghijklmnopqrstuvwxyz"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"0123456789";

static const int	SIZE = sizeof(ALPHABET) - 1;

static void	ft_bruteforce_loop(char *pass, int index, int actlen)
{
	int		i;

	i = 0;
	while (i < SIZE)
	{
		pass[index] = ALPHABET[i];
		if (index == (actlen - 1))
		{
			// Code to execute for each generated password
		}
		else
			ft_bruteforce_loop(pass, (index + 1), actlen);
		++i;
	}
}

static void	ft_bruteforce(int len)
{
	int		i;
	char	*pass;

	i = 1;
	pass = (char *)malloc(len + 1);
	while (i <= len)
	{
		ft_bruteforce_loop(pass, 0, i);
		++i;
	}
}

int			main(int argc, char *argv[])
{
	if (argc == 2)
		ft_bruteforce(ft_atoi(argv[1]));
	else
		ft_putstr("usage : ./bruteforce n");
	ft_putchar('\n');
	return (0);
}
