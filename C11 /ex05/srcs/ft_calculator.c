/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:32:48 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/13 10:33:07 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	calculator(int num1, char operator, int num2)
{
	if (operator == '+')
		ft_putnbr(num1 + num2);
	else if (operator == '-')
		ft_putnbr(num1 - num2);
	else if (operator == '/')
	{
		if (num2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(num1 / num2);
	}
	else if (operator == '*')
		ft_putnbr(num1 * num2);
	else if (operator == '%')
	{
		if (num2 == 0)
			write(1, "Stop : modulo by zero", 22);
		else
			ft_putnbr(num1 % num2);
	}
	else
		write(1, "0", 1);
}
