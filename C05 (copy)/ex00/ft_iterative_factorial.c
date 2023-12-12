/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:58:48 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 17:01:01 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
	{	
		return (0);
	}
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	nb = -5;
	int	nb1 = 5;
	int	nb2 = 0	;
	printf("%i \n",ft_iterative_factorial(nb));
	printf("%i \n",ft_iterative_factorial(nb1));
	printf("%i \n",ft_iterative_factorial(nb2));
}*/
