/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:15:21 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 17:21:01 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb = nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 2;
	printf("%i", ft_recursive_power(nb, power));
}*/
