/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:40:03 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 17:04:15 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	nb = -5;
	int	nb1 = 5;
	int	nb2 = 0	;
	printf("%i \n",ft_recursive_factorial(nb));
	printf("%i \n",ft_recursive_factorial(nb1));
	printf("%i \n",ft_recursive_factorial(nb2));
}*/
