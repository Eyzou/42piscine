/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:19:30 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 19:33:25 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2 ;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;	
	int	nb4;

	nb1 = 7;
	nb2 = 0;
	nb3 = 5981;
	nb4 = 2147483647;
	printf("%i \n", ft_find_next_prime(nb1));
	printf("%i \n", ft_find_next_prime(nb2));
	printf("%i \n", ft_find_next_prime(nb3));
	printf("%i \n", ft_find_next_prime(nb4));
	return (0);
}*/
