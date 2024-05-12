/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:51:34 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/12 14:08:54 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	a = 0;
	b = 0;
	if (argc != 4)
		return (-1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operator = ft_find_operator(argv[2]);
	calculator(a, operator, b);
	ft_putchar('\n');
}
