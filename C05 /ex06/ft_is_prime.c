/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:08:32 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 17:27:14 by ehamm            ###   ########.fr       */
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

/*int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;	

	nb1 = 7;
	nb2 = 0;
	nb3 = 4;
	printf("%i \n", ft_is_prime(nb1));
	printf("%i \n", ft_is_prime(nb2));
	printf("%i \n", ft_is_prime(nb3));
	return (0);
}*/
