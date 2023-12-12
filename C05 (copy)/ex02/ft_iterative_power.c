/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:55:42 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/30 09:12:33 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{	
		nb *= i;
		power--;
	}
	return (nb);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 4;
	power = 4;
	printf("%i", ft_iterative_power(nb,power));
}*/
